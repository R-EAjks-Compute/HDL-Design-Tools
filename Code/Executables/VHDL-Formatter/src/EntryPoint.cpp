//  Collection of HDL Design Tools
//  Copyright (c) 2025 Andrea and Eric DELAGE <Contact@by-EAjks.Com>
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <https://www.gnu.org/licenses/>.

// First-Party Headers
#include "PrecompiledHeaders.h"
#include "Version.h"
#include "byEAjksCom/Libraries/VHDL/Formatting/VHDLFormatterFactory.h"
#include "byEAjksCom/Libraries/VHDL/Formatting/VHDLFormatterFactoryIF.h"
#include "byEAjksCom/Libraries/VHDL/Formatting/VHDLFormatterIF.h"

// Third-Party Headers
#include <CLI/CLI.hpp>
#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/spdlog.h>

// Standard C++/STL Headers
#include <fstream>
#include <iostream>
#include <memory>
#include <string>

// Standard C-->C++ Headers
#include <cmath>
#include <cstdint>

namespace VHDLFormatting = ::byEAjksCom::Libraries::VHDL::Formatting;

/// @brief Is the entry-point of the executable.
/// @param[in] argc The number of command-line arguments.
/// @param[in] argv The command-line arguments.
int main(int argc, char **argv)
{
    ::std::shared_ptr<::spdlog::logger> logger{::std::make_shared<::spdlog::logger>(EXECUTABLE_NAME)};
    logger->flush_on(::spdlog::level::err);
    logger->set_level(::spdlog::level::trace);
    ::spdlog::register_logger(logger);

    ::spdlog::sink_ptr sink{::std::make_shared<::spdlog::sinks::stdout_color_sink_mt>()};
    sink->set_pattern("%^[%L] %v%$");
    sink->set_level(::spdlog::level::info);
    logger->sinks().push_back(sink);

    try
    {
        ::CLI::App cliParser{EXECUTABLE_NAME + ", v" + EXECUTABLE_VERSION};

        cliParser.add_flag_function(
            "-v,--verbose",
            [logger](int32_t verbosityLevel) {
                switch (verbosityLevel)
                {
                case 0:
                    logger->set_level(::spdlog::level::info);
                    break;
                case 1:
                    logger->set_level(::spdlog::level::debug);
                    break;
                default:
                    logger->set_level(::spdlog::level::trace);
                    break;
                }
            },
            "Sets the verbosity level");

        cliParser.add_option_function<::std::string>(
            "--log-to",
            [logger](::std::string logFileName) {
                ::spdlog::sink_ptr sink{::std::make_shared<::spdlog::sinks::basic_file_sink_mt>(logFileName)};
                sink->set_pattern("[%T.%F] %l: %v (%n)");
                sink->set_level(::spdlog::level::trace);
                logger->sinks().push_back(sink);
            },
            "Saves the logs into a file.");

        ::std::string filename_in;

        cliParser.add_option("-i,--input-file", filename_in, "Input file")->required()->check(::CLI::ExistingFile);

        try
        {
            cliParser.parse(argc, argv);
        }
        catch (const ::CLI::ParseError &exception)
        {
            return cliParser.exit(exception);
        }

        logger->info("starting {}, v{}", EXECUTABLE_NAME, EXECUTABLE_VERSION);

        ::std::ifstream file_in{filename_in};

        ::std::unique_ptr<VHDLFormatting::VHDLFormatterFactoryIF> vhdlformatterFactory{::std::make_unique<VHDLFormatting::VHDLFormatterFactory>(logger)};
        ::std::unique_ptr<VHDLFormatting::VHDLFormatterIF> vhdlformatter{vhdlformatterFactory->CreateInstance()};

        vhdlformatter->Format(file_in, ::std::cout);

        logger->info("finished successfully");
        logger->flush();

        return (0);
    }
    catch (const ::std::exception &exception)
    {
        logger->error(exception.what());
        logger->info("finished prematurely with error(s)");
        logger->flush();

        return (1);
    }
}
