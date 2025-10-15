#   Collection of HDL Design Tools
#   Copyright (c) 2025 Andrea and Eric DELAGE <Contact@by-EAjks.Com>
#
#   This program is free software: you can redistribute it and/or modify
#   it under the terms of the GNU General Public License as published by
#   the Free Software Foundation, either version 3 of the License, or
#   (at your option) any later version.
#
#   This program is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#   GNU General Public License for more details.
#
#   You should have received a copy of the GNU General Public License
#   along with this program.  If not, see <https://www.gnu.org/licenses/>.

PROJECT(VHDL-Formatter VERSION ${HDL-Design-Tools_VERSION} LANGUAGES CXX)

CONFIGURE_FILE(
    ${PROJECT_SOURCE_DIR}/src/Version.h.in
    ${PROJECT_BINARY_DIR}/src/Version.h
    @ONLY)

FILE(
    GLOB_RECURSE
    VHDL-FormatterExecutableHeaders
        ${PROJECT_SOURCE_DIR}/src/*.h)

FILE(
    GLOB_RECURSE
    VHDL-FormatterExecutableSources
        ${PROJECT_SOURCE_DIR}/src/*.cpp)

ADD_EXECUTABLE(
    VHDL-FormatterExecutable
        ${VHDL-FormatterExecutableHeaders}
        ${VHDL-FormatterExecutableSources})

TARGET_INCLUDE_DIRECTORIES(
    VHDL-FormatterExecutable
        PRIVATE ${PROJECT_BINARY_DIR}/src
        PRIVATE ${PROJECT_SOURCE_DIR}/src)

IF(${USE_PRECOMPILED_HEADERS})
    TARGET_PRECOMPILE_HEADERS(
        VHDL-FormatterExecutable
            PRIVATE ${PROJECT_SOURCE_DIR}/src/PrecompiledHeaders.h)
ENDIF()

TARGET_COMPILE_OPTIONS(
    VHDL-FormatterExecutable
        PRIVATE $<$<AND:$<CXX_COMPILER_ID:IntelLLVM>,$<COMPILE_LANGUAGE:CXX>>:-Wno-tautological-constant-compare>)

TARGET_LINK_LIBRARIES(
    VHDL-FormatterExecutable
        PRIVATE CLI11::CLI11
        PRIVATE spdlog::spdlog_header_only
        PRIVATE VHDL-FormattingStaticLibrary)

SET_TARGET_PROPERTIES(
    VHDL-FormatterExecutable
        PROPERTIES
            INTERPROCEDURAL_OPTIMIZATION ON
            CXX_VISIBILITY_PRESET default
            VISIBILITY_INLINES_HIDDEN ON
            OUTPUT_NAME ${PROJECT_NAME})

IF(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")

    ADD_CUSTOM_COMMAND(
        TARGET VHDL-FormatterExecutable
        POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_RUNTIME_DLLS:VHDL-FormatterExecutable> $<TARGET_FILE_DIR:VHDL-FormatterExecutable>
        COMMAND_EXPAND_LISTS)

ENDIF()

INSTALL(
    TARGETS
        VHDL-FormatterExecutable
    RUNTIME
        DESTINATION bin
        COMPONENT runtime)
