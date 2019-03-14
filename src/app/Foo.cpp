#include "GizmoFactory.hpp"
#include "utils/Log.hpp"


int main(int argc, char **argv)
{
    if (argc > 1)
    {
        GizmoFactory fac;
        auto impl = fac.create(argv[1]);

        if (impl)
        {
            impl->frobnicate();
        }
        else
        {
            Log("Unknown type");
        }
    }
    else
    {
        Log("usage: foo <type>");
    }

    return 0;
}
