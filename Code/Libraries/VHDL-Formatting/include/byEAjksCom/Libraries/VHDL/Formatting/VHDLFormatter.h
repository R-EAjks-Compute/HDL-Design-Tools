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
#include "byEAjksCom/Libraries/VHDL/Formatting/ANTLR/VHDLBaseListener.h"
#include "byEAjksCom/Libraries/VHDL/Formatting/PrecompiledHeaders.h"
#include "byEAjksCom/Libraries/VHDL/Formatting/PreprocessorMacros.h"
#include "byEAjksCom/Libraries/VHDL/Formatting/VHDLFormatterIF.h"

// Third-Party Headers
#include <spdlog/spdlog.h>

// Standard C++/STL Headers
#include <iostream>
#include <memory>
#include <sstream>
#include <string>

// Standard C-->C++ Headers
#include <cmath>
#include <cstdint>

namespace byEAjksCom::Libraries::VHDL::Formatting
{

/// @brief This class implements ...
class VHDL_FORMATTING_DLL_HIDDEN VHDLFormatter final : public virtual VHDLFormatterIF, public ANTLR::VHDLBaseListener
{
  public:
    /// @brief Constructs a new instance of the VHDLFormatter class.
    /// @param[in] logger The SpdLog logger used by the calling function.
    explicit VHDLFormatter(::std::shared_ptr<::spdlog::logger> logger) noexcept;

    //! Avoids implicit generation of the copy constructor.
    explicit VHDLFormatter(const VHDLFormatter &other) noexcept = delete;

    //! Avoids implicit generation of the move constructor.
    explicit VHDLFormatter(VHDLFormatter &&other) noexcept = delete;

    /// @brief Destructs the instance of the VHDLFormatter class.
    virtual ~VHDLFormatter() noexcept;

    //! Avoids implicit generation of the copy assignment.
    auto operator=(const VHDLFormatter &other) noexcept -> VHDLFormatter & = delete;

    //! Avoids implicit generation of the move assignment.
    auto operator=(VHDLFormatter &&other) noexcept -> VHDLFormatter & = delete;

    /// @brief Formats some VHDL code.
    /// @param[in] stream_in The VHDL code to format.
    /// @param[out] stream_out The formatted VHDL code.
    virtual auto Format(::std::istream &stream_in, ::std::ostream &stream_out) noexcept -> void override final;

  private:
    void enterEntity_declaration(ANTLR::VHDLParser::Entity_declarationContext *ctx) override
    {
        this->output << "entity " << ctx->identifier(0)->getText() << " is" << ::std::endl;
    }

    void exitEntity_declaration(ANTLR::VHDLParser::Entity_declarationContext *ctx) override
    {
        this->output << "end " << ctx->identifier(0)->getText() << ";" << ::std::endl;
    }

  private:
    ::std::shared_ptr<::spdlog::logger> logger{nullptr};
    ::std::stringstream output{};
};

} // namespace byEAjksCom::Libraries::VHDL::Formatting
