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

PROJECT(VHDL-Formatting VERSION ${HDL-Design-Tools_VERSION} LANGUAGES CXX)

CONFIGURE_FILE(
    ${PROJECT_SOURCE_DIR}/include-api/byEAjksCom/Libraries/VHDL/Formatting/Version.h.in
    ${PROJECT_BINARY_DIR}/include-api/byEAjksCom/Libraries/VHDL/Formatting/Version.h
    @ONLY)

FILE(
    GLOB_RECURSE
    VHDL-FormattingLibraryHeaders
        ${PROJECT_SOURCE_DIR}/include-api/byEAjksCom/Libraries/VHDL/Formatting/*.h
        ${PROJECT_SOURCE_DIR}/include/byEAjksCom/Libraries/VHDL/Formatting/*.h)

FILE(
    GLOB_RECURSE
    VHDL-FormattingLibrarySources
        ${PROJECT_SOURCE_DIR}/src/byEAjksCom/Libraries/VHDL-Formatting.cpp
        ${PROJECT_SOURCE_DIR}/src/byEAjksCom/Libraries/VHDL/Formatting/*.cpp)

# Let's define the static version of the library.

ADD_LIBRARY(
    VHDL-FormattingStaticLibrary
        STATIC
            ${VHDL-FormattingLibraryHeaders}
            ${VHDL-FormattingLibrarySources})

TARGET_INCLUDE_DIRECTORIES(
    VHDL-FormattingStaticLibrary
        INTERFACE $<INSTALL_INTERFACE:include>
        PUBLIC    $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/include-api>
        PUBLIC    $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/include>
        PUBLIC    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include-api>
        PUBLIC    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
        PRIVATE   ${HDL-Design-Tools_SOURCE_DIR}/Dependencies/ANTLR-4.13.2/include/antlr4-runtime
        PRIVATE   $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src>)

IF(${USE_PRECOMPILED_HEADERS})
    TARGET_PRECOMPILE_HEADERS(
        VHDL-FormattingStaticLibrary
            PRIVATE   ${PROJECT_SOURCE_DIR}/include-api/byEAjksCom/Libraries/VHDL/Formatting/PrecompiledHeaders.h)
ENDIF()

TARGET_COMPILE_DEFINITIONS(
    VHDL-FormattingStaticLibrary
        PUBLIC    VHDL_FORMATTING_LIBRARY_IS_STATIC
        PRIVATE   COMPILING_VHDL_FORMATTING_LIBRARY
        PRIVATE   $<$<CONFIG:Debug>:SPDLOG_DEBUG_ON>
        PRIVATE   SPDLOG_TRACE_ON)

TARGET_COMPILE_OPTIONS(
    VHDL-FormattingStaticLibrary
        PRIVATE   $<$<AND:$<CXX_COMPILER_ID:GNU>,$<COMPILE_LANGUAGE:CXX>>:-fvisibility=hidden>
        PRIVATE   $<$<AND:$<CXX_COMPILER_ID:IntelLLVM>,$<COMPILE_LANGUAGE:CXX>>:-fvisibility=hidden>
        PRIVATE   $<$<AND:$<CXX_COMPILER_ID:IntelLLVM>,$<COMPILE_LANGUAGE:CXX>>:-Wno-tautological-constant-compare>)

TARGET_LINK_LIBRARIES(
    VHDL-FormattingStaticLibrary
        PRIVATE   $<$<CXX_COMPILER_ID:GNU>:pthread>
        PRIVATE   spdlog::spdlog_header_only
        PRIVATE   ${HDL-Design-Tools_SOURCE_DIR}/Dependencies/ANTLR-4.13.2/lib/libantlr4-runtime.a)

SET_TARGET_PROPERTIES(
    VHDL-FormattingStaticLibrary
        PROPERTIES
            INTERPROCEDURAL_OPTIMIZATION ON
            CXX_VISIBILITY_PRESET default
            VISIBILITY_INLINES_HIDDEN ON
            OUTPUT_NAME ${PROJECT_NAME})

## Let's define the shared version of the library.
#
#ADD_LIBRARY(
#    VHDL-FormattingSharedLibrary
#        SHARED
#            ${VHDL-FormattingLibraryHeaders}
#            ${VHDL-FormattingLibrarySources})
#
#TARGET_INCLUDE_DIRECTORIES(
#    VHDL-FormattingSharedLibrary
#        INTERFACE $<INSTALL_INTERFACE:include>
#        PUBLIC    $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/include-api>
#        PUBLIC    $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/include>
#        PUBLIC    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include-api>
#        PUBLIC    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
#        PRIVATE   ${HDL-Design-Tools_SOURCE_DIR}/Dependencies/ANTLR-4.13.2/include/antlr4-runtime
#        PRIVATE   $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src>)
#
#IF(${USE_PRECOMPILED_HEADERS})
#    TARGET_PRECOMPILE_HEADERS(
#        VHDL-FormattingSharedLibrary
#            PRIVATE   ${PROJECT_SOURCE_DIR}/include-api/byEAjksCom/Libraries/VHDL/Formatting/PrecompiledHeaders.h)
#ENDIF()
#
#TARGET_COMPILE_DEFINITIONS(
#    VHDL-FormattingSharedLibrary
#        PUBLIC    VHDL_FORMATTING_LIBRARY_IS_SHARED
#        PRIVATE   COMPILING_VHDL_FORMATTING_LIBRARY
#        PRIVATE   $<$<CONFIG:Debug>:SPDLOG_DEBUG_ON>
#        PRIVATE   SPDLOG_TRACE_ON)
#
#TARGET_COMPILE_OPTIONS(
#    VHDL-FormattingSharedLibrary
#        PRIVATE   $<$<AND:$<CXX_COMPILER_ID:GNU>,$<COMPILE_LANGUAGE:CXX>>:-fvisibility=hidden>
#        PRIVATE   $<$<AND:$<CXX_COMPILER_ID:IntelLLVM>,$<COMPILE_LANGUAGE:CXX>>:-fvisibility=hidden>
#        PRIVATE   $<$<AND:$<CXX_COMPILER_ID:IntelLLVM>,$<COMPILE_LANGUAGE:CXX>>:-Wno-tautological-constant-compare>)
#
#TARGET_LINK_LIBRARIES(
#    VHDL-FormattingSharedLibrary
#        PRIVATE   $<$<CXX_COMPILER_ID:GNU>:pthread>
#        PRIVATE   spdlog::spdlog_header_only
#        PRIVATE   ${HDL-Design-Tools_SOURCE_DIR}/Dependencies/ANTLR-4.13.2/lib/libantlr4-runtime.a)
#
#SET_TARGET_PROPERTIES(
#    VHDL-FormattingSharedLibrary
#        PROPERTIES
#            INTERPROCEDURAL_OPTIMIZATION ON
#            CXX_VISIBILITY_PRESET default
#            VISIBILITY_INLINES_HIDDEN ON
#            OUTPUT_NAME ${PROJECT_NAME}
#            VERSION ${PROJECT_VERSION}
#            SOVERSION ${PROJECT_VERSION_MAJOR})
#
## Let's define where the C++ headers,
## and the static/shared libraries are installed.
#
#INSTALL(
#    FILES ${PROJECT_BINARY_DIR}/include-api/byEAjksCom/Libraries/VHDL/Formatting/Version.h
#    DESTINATION include/byEAjksCom/Libraries/VHDL/Formatting
#    COMPONENT sdk)
#
#INSTALL(
#    DIRECTORY ${PROJECT_SOURCE_DIR}/include-api/byEAjksCom/Libraries/VHDL/Formatting/
#    DESTINATION include/byEAjksCom/Libraries/VHDL/Formatting
#    COMPONENT sdk
#    FILES_MATCHING
#    PATTERN *.h)
#
#INSTALL(
#    TARGETS
#        VHDL-FormattingStaticLibrary
#        VHDL-FormattingSharedLibrary
#    ARCHIVE
#        DESTINATION lib/static
#        COMPONENT sdk
#    LIBRARY
#        DESTINATION lib/shared
#        COMPONENT runtime
#    RUNTIME
#        DESTINATION bin
#        COMPONENT runtime)
#
#IF(${BUILD_API_DOCUMENTATION})
#
#    IF(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Linux")
#
#        # Let's generate the API documentation of the library,
#        # and define where the generated API documentation is installed.
#
#        FIND_PACKAGE(Doxygen REQUIRED)
#
#        CONFIGURE_FILE(
#            ${PROJECT_SOURCE_DIR}/doc/api/Doxyfile.in
#            ${PROJECT_BINARY_DIR}/doc/api/Doxyfile
#            @ONLY)
#
#        ADD_CUSTOM_COMMAND(
#            COMMENT "Creating HTML documentation"
#            DEPENDS ${PROJECT_SOURCE_DIR}/doc/api/Doxyfile.in
#                    ${VHDL-FormattingLibraryHeaders}
#                    ${VHDL-FormattingLibrarySources}
#            OUTPUT  ${PROJECT_BINARY_DIR}/doc/api/html/index.html
#            COMMAND ${DOXYGEN_EXECUTABLE} ARGS ${PROJECT_BINARY_DIR}/doc/api/Doxyfile
#            WORKING_DIRECTORY ${PROJECT_BINARY_DIR}/doc/api)
#
#        ADD_CUSTOM_TARGET(
#            VHDL-FormattingApiDocumentation ALL
#                DEPENDS ${PROJECT_BINARY_DIR}/doc/api/html/index.html
#                VERBATIM)
#
#        INSTALL(
#            DIRECTORY ${PROJECT_BINARY_DIR}/doc/api/html
#            DESTINATION doc/api/byEAjksCom/Libraries/VHDL/Formatting
#            COMPONENT sdk)
#
#    ENDIF()
#
#ENDIF()
