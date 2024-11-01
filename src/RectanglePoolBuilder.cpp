#include "RectanglePoolBuilder.h"
#include <string>


RectanglePoolBuilder::RectanglePoolBuilder()
{
}

RectanglePoolBuilder::~RectanglePoolBuilder()
{
}

void RectanglePoolBuilder::buildSurface(Pool& tPool, int sideA, int sideB){
    int surface;
    surface = sideA * sideB;
    tPool.setSurface(std::to_string(surface));
}
void RectanglePoolBuilder::buildColor(Pool& tPool, std::string tColor){  
    tPool.setColor(tColor);
}
void RectanglePoolBuilder::buildMaterial(Pool& tPool, std::string tMaterial){
    tPool.setMaterial(tMaterial);
}
RectanglePool RectanglePoolBuilder::buildPool(int sideA, int sideB, std::string color, std::string material){
    RectanglePool pool;
    buildSurface(pool, sideA, sideB);
    buildColor(pool, color);
    buildMaterial(pool, material);

    return pool;
    
}