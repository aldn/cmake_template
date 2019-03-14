#pragma once

#include <memory>
#include <string>

#include "IGizmo.hpp"

class GizmoFactory
{
public:

    /// Initialize the factory
    GizmoFactory();
    /// Need to define this to destroy our impl
    ~GizmoFactory();

    /// Create a concrete Gizmo instance based on tag
    std::unique_ptr<IGizmo> create(const std::string &tag);


private:
    struct Impl;
    std::unique_ptr<Impl> m_i;
};
