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

#include "byEAjksCom/Libraries/VHDL/Formatting/VHDLFormatter.h"

// First-Party Headers
#include "byEAjksCom/Libraries/VHDL/Formatting/ANTLR/VHDLLexer.h"
#include "byEAjksCom/Libraries/VHDL/Formatting/ANTLR/VHDLParser.h"
#include "byEAjksCom/Libraries/VHDL/Formatting/PrecompiledHeaders.h"

// Third-Party Headers
#include "antlr4-runtime.h"
#include <spdlog/spdlog.h>

// Standard C++/STL Headers
#include <iostream>
#include <memory>
#include <string>

// Standard C-->C++ Headers
#include <cmath>
#include <cstdint>

namespace byEAjksCom::Libraries::VHDL::Formatting
{

VHDLFormatter::VHDLFormatter(::std::shared_ptr<::spdlog::logger> logger) noexcept : logger{::std::move(logger)}
{
}

VHDLFormatter::~VHDLFormatter() noexcept
{
    this->logger = nullptr;
}

auto VHDLFormatter::Format(::std::istream &stream_in, ::std::ostream &stream_out) noexcept -> void
{
    this->output.str("");
    this->output.clear();

    try
    {
        ::antlr4::ANTLRInputStream input(stream_in);

        ANTLR::VHDLLexer lexer(&input);

        ::antlr4::CommonTokenStream tokens(&lexer);

        ANTLR::VHDLParser parser(&tokens);

        ::antlr4::tree::ParseTree *tree = parser.design_file();

        ::antlr4::tree::ParseTreeWalker walker;

        walker.walk(this, tree);
    }
    catch (const ::antlr4::ParseCancellationException &exception)
    {
        logger->error(exception.what());
        logger->flush();
    }

    stream_out << this->output.str() << ::std::endl;
}

} // namespace byEAjksCom::Libraries::VHDL::Formatting
