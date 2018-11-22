
add_subdirectory(types)

add_library(gizmo
    GizmoFactory.cpp
    $<TARGET_OBJECTS:gizmo_types> )

target_link_libraries(gizmo
    utils)
