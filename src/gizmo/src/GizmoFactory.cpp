#include "GizmoFactory.hpp"
#include "FancyGizmo.hpp"
#include "WhirringGizmo.hpp"


std::unique_ptr<IGizmo> GizmoFactory::create(const std::string &tag)
{
    if (tag == "fancy")
    {
        return std::make_unique<FancyGizmo>();
    }
    else if (tag == "whirring")
    {
        return std::make_unique<WhirringGizmo>();
    }
    else
    {
        return nullptr;
    }
}
