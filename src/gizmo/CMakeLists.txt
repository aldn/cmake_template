
add_library(gizmo
    src/GizmoFactory.cpp
    src/FancyGizmo.cpp
    src/WhirringGizmo.cpp
    )

target_include_directories(gizmo
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src
    )

target_link_libraries(gizmo
    utils
    )

