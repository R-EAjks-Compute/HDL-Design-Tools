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

#pragma once

// First-Party Headers
#include "byEAjksCom/Libraries/VHDL/Formatting/PrecompiledHeaders.h"
#include "byEAjksCom/Libraries/VHDL/Formatting/PreprocessorMacros.h"

// Third-Party Headers

// Standard C++/STL Headers
#include <iostream>

// Standard C-->C++ Headers
#include <cmath>
#include <cstdint>

namespace byEAjksCom::Libraries::VHDL::Formatting
{

/// @brief This interface exposes methods and properties to ...
class VHDL_FORMATTING_DLL_EXPORT VHDLFormatterIF
{
  public:
    /// @brief Constructs a new instance of the VHDLFormatterIF interface.
    explicit VHDLFormatterIF() noexcept;

    //! Avoids implicit generation of the copy constructor.
    explicit VHDLFormatterIF(const VHDLFormatterIF &other) noexcept = delete;

    //! Avoids implicit generation of the move constructor.
    explicit VHDLFormatterIF(VHDLFormatterIF &&other) noexcept = delete;

    /// @brief Destructs the instance of the VHDLFormatterIF interface.
    virtual ~VHDLFormatterIF() noexcept;

    //! Avoids implicit generation of the copy assignment.
    auto operator=(const VHDLFormatterIF &other) noexcept -> VHDLFormatterIF & = delete;

    //! Avoids implicit generation of the move assignment.
    auto operator=(VHDLFormatterIF &&other) noexcept -> VHDLFormatterIF & = delete;

    /// @brief Formats some VHDL code.
    /// @param[in] stream_in The VHDL code to format.
    /// @param[out] stream_out The formatted VHDL code.
    virtual auto Format(::std::istream &stream_in, ::std::ostream &stream_out) noexcept -> void = 0;
};

} // namespace byEAjksCom::Libraries::VHDL::Formatting
