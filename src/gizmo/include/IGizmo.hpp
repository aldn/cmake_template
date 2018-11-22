#pragma once

class IGizmo
{
public:

    virtual ~IGizmo() = default;

    virtual void frobnicate() = 0;
};
