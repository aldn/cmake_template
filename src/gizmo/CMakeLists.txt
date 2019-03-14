add_subdirectory(src)

target_include_directories(gizmo
    PUBLIC
        include
    PRIVATE
        src
        src/types
    )

target_compile_features(gizmo
    PUBLIC
        cxx_nullptr
    PRIVATE
        cxx_lambdas
        cxx_range_for
    )
