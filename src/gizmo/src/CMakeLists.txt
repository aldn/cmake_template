

add_library(gizmo
    GizmoFactory.cpp
    types/FancyGizmo.cpp
    types/WhirringGizmo.cpp
     )

target_link_libraries(gizmo
    utils)
