#pragma once

#include <memory>
#include <string>

#include "IGizmo.hpp"

class GizmoFactory
{
public:

    static std::unique_ptr<IGizmo> create(const std::string &tag);
};
