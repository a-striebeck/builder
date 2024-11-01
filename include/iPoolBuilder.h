#ifndef I_POOL_BUILDER_H
#define I_POOL_BUILDER_H
#include "Pool.h"

class iPoolBuilder
{
public:
    virtual void buildSurface() = 0;
    virtual void buildColor() = 0;
    virtual void buildMaterial() = 0;
    virtual void buildPool() = 0;
};

#endif // I_POOL_BUILDER_h