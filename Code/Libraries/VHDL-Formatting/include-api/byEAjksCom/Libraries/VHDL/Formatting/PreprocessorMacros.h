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

#if defined _WIN32 || defined _WIN64 || defined __CYGWIN__
#define VHDL_FORMATTING_DLL_HIDDEN_HELPER
#define VHDL_FORMATTING_DLL_EXPORT_HELPER __declspec(dllexport)
#define VHDL_FORMATTING_DLL_IMPORT_HELPER __declspec(dllimport)
#define VHDL_FORMATTING_DEPRECATED_HELPER __declspec(deprecated)
#else
#if __GNUC__ >= 4
#define VHDL_FORMATTING_DLL_HIDDEN_HELPER __attribute__((visibility("hidden")))
#define VHDL_FORMATTING_DLL_EXPORT_HELPER __attribute__((visibility("default")))
#define VHDL_FORMATTING_DLL_IMPORT_HELPER __attribute__((visibility("default")))
#define VHDL_FORMATTING_DEPRECATED_HELPER __attribute__((deprecated))
#else
#define VHDL_FORMATTING_DLL_HIDDEN_HELPER
#define VHDL_FORMATTING_DLL_EXPORT_HELPER
#define VHDL_FORMATTING_DLL_IMPORT_HELPER
#define VHDL_FORMATTING_DEPRECATED_HELPER
#endif
#endif

#if defined VHDL_FORMATTING_LIBRARY_IS_SHARED
#if defined COMPILING_VHDL_FORMATTING_LIBRARY
#define VHDL_FORMATTING_DLL_HIDDEN VHDL_FORMATTING_DLL_HIDDEN_HELPER
#define VHDL_FORMATTING_DLL_EXPORT VHDL_FORMATTING_DLL_EXPORT_HELPER
#define VHDL_FORMATTING_DEPRECATED VHDL_FORMATTING_DEPRECATED_HELPER
#else
#define VHDL_FORMATTING_DLL_HIDDEN VHDL_FORMATTING_DLL_HIDDEN_HELPER
#define VHDL_FORMATTING_DLL_EXPORT VHDL_FORMATTING_DLL_IMPORT_HELPER
#define VHDL_FORMATTING_DEPRECATED VHDL_FORMATTING_DEPRECATED_HELPER
#endif
#else
#define VHDL_FORMATTING_DLL_HIDDEN
#define VHDL_FORMATTING_DLL_EXPORT
#define VHDL_FORMATTING_DEPRECATED VHDL_FORMATTING_DEPRECATED_HELPER
#endif
