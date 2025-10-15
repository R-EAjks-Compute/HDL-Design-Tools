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

#include "byEAjksCom/Libraries/VHDL/Formatting/VHDLFormatterFactory.h"

// First-Party Headers
#include "byEAjksCom/Libraries/VHDL/Formatting/PrecompiledHeaders.h"
#include "byEAjksCom/Libraries/VHDL/Formatting/VHDLFormatter.h"
#include "byEAjksCom/Libraries/VHDL/Formatting/VHDLFormatterIF.h"

// Third-Party Headers
#include <spdlog/spdlog.h>

// Standard C++/STL Headers
#include <memory>

// Standard C-->C++ Headers
#include <cmath>
#include <cstdint>

namespace byEAjksCom::Libraries::VHDL::Formatting
{

VHDLFormatterFactory::VHDLFormatterFactory(::std::shared_ptr<::spdlog::logger> logger) noexcept : logger{::std::move(logger)}
{
}

VHDLFormatterFactory::~VHDLFormatterFactory() noexcept
{
    this->logger = nullptr;
}

auto VHDLFormatterFactory::CreateInstance() noexcept -> ::std::unique_ptr<VHDLFormatterIF>
{
    ::std::unique_ptr<VHDLFormatter> instance{::std::make_unique<VHDLFormatter>(this->logger)};

    return (instance);
}

} // namespace byEAjksCom::Libraries::VHDL::Formatting
