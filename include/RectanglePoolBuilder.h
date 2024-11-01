
#ifndef  RECTANGLEPOOLBUILDER_H
#define RECTANGLEPOOLBUILDER_H
#include "iPoolBuilder.h"
#include "RectanglePool.h"
#include "Pool.h"
#include <string>

class RectanglePoolBuilder  :   public  iPoolBuilder
{
public:
    RectanglePoolBuilder();
    ~RectanglePoolBuilder();
    void buildSurface(Pool& tPool, int sideA, int sideB);
    void buildColor(Pool& tPool, std::string tColor);
    void buildMaterial(Pool& tPool, std::string tMaterial);
    RectanglePool buildPool(int sideA, int sideB, std::string color, std::string material);
};

#endif // RECTANGLEPOOLBUILDER_H