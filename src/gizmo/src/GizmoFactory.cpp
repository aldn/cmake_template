#include "GizmoFactory.hpp"
#include "types/FancyGizmo.hpp"
#include "types/WhirringGizmo.hpp"

#include <array>
#include <utility>
#include <functional>


struct GizmoFactory::Impl
{
    using Pair =  std::pair<const char*, std::function<std::unique_ptr<IGizmo>()>>;

    std::array< Pair,2 > gizmo_spawners
    {
        Pair( "fancy",
                []() {
                    return std::make_unique<FancyGizmo>();
                }
            ),
        Pair( "whirring",
                []() {
                    return std::make_unique<WhirringGizmo>();
                }
            )
    };
};

GizmoFactory::GizmoFactory()
    :m_i(std::make_unique<Impl>())
{
}


GizmoFactory::~GizmoFactory()
{
}

std::unique_ptr<IGizmo> GizmoFactory::create(const std::string &tag)
{
    for (auto& spawner : m_i->gizmo_spawners)
    {
        if (spawner.first == tag)
        {
            return spawner.second();
        }
    }
    return std::unique_ptr<IGizmo>();
}
