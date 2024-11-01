#include <RectanglePoolBuilder.h>
#include <string>


RectanglePoolBuilder::RectanglePoolBuilder(/* args */)
{
}

RectanglePoolBuilder::~RectanglePoolBuilder()
{
}

void RectanglePoolBuilder::buildSurface(Pool& tPool, int sideA, int sideB){
    int surface;
    surface = sideA * sideB;
    tPool.setSurface(toString(surface));
}
void RectanglePoolBuilder::buildColor(Pool& tPool, string tColor){  
    tPool.setColor(tColor);
}
void RectanglePoolBuilder::buildMaterial(Pool& tPool, string tMaterial){
    tPool.setMaterial(tMaterial);
}
Pool RectanglePoolBuilder::buildPool(int sideA, int sideB, string color, string material){
    RectanglePool pool;
    buildSurface(pool, int sideA, int sideB);
    buildColor(pool, color);
    buildMaterial(pool, material);

    return pool;
    
}