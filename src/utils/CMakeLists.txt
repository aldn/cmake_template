
add_library(utils
    Log.cpp)

target_include_directories(utils
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
    )
