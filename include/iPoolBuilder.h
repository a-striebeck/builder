#include <Pool.h>

class iPoolBuilder
{
public:
    virtual iPoolBuilder(){};
    virtual ~iPoolBuilder(){};

    virtual void buildSurface(){} = 0;
    virtual void buildColor(){} = 0;
    virtual void buildMaterial(){} = 0;
    virtual Pool buildPool() {} = 0;
};

