cmake_minimum_required (VERSION 3.12)

project(cmake_template)

add_compile_options(
    "$<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:GNU>>:-Wall;-Werror>"
    "$<$<CXX_COMPILER_ID:MSVC>:/W4;/WX>"
    )


#set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(src)

