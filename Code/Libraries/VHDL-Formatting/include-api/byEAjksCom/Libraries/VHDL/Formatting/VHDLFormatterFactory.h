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
#include "byEAjksCom/Libraries/VHDL/Formatting/VHDLFormatterFactoryIF.h"
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

/// @brief This interface exposes methods and properties to ...
class VHDL_FORMATTING_DLL_EXPORT VHDLFormatterFactory final : public virtual VHDLFormatterFactoryIF
{
  public:
    /// @brief Constructs a new instance of the VHDLFormatterFactory class.
    /// @param[in] logger The SpdLog logger used by the calling function.
    explicit VHDLFormatterFactory(::std::shared_ptr<::spdlog::logger> logger) noexcept;

    //! Avoids implicit generation of the copy constructor.
    explicit VHDLFormatterFactory(const VHDLFormatterFactory &other) noexcept = delete;

    //! Avoids implicit generation of the move constructor.
    explicit VHDLFormatterFactory(VHDLFormatterFactory &&other) noexcept = delete;

    /// @brief Destructs the instance of the VHDLFormatterFactory class.
    virtual ~VHDLFormatterFactory() noexcept;

    //! Avoids implicit generation of the copy assignment.
    auto operator=(const VHDLFormatterFactory &other) noexcept -> VHDLFormatterFactory & = delete;

    //! Avoids implicit generation of the move assignment.
    auto operator=(VHDLFormatterFactory &&other) noexcept -> VHDLFormatterFactory & = delete;

    /// @brief Creates an instance.
    /// @return An instance.
    virtual auto CreateInstance() noexcept -> ::std::unique_ptr<VHDLFormatterIF> override final;

  protected:
    ::std::shared_ptr<::spdlog::logger> logger{nullptr};
};

} // namespace byEAjksCom::Libraries::VHDL::Formatting
