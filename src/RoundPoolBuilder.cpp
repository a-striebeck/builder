#include <RoundPoolBuilder.h>
#include <string>
#include <cmath>

RoundPoolBuilder::RoundPoolBuilder(/* args */)
{
}

RoundPoolBuilder::~RoundPoolBuilder()
{
}


void RoundPoolBuilder::buildSurface(RoundPool& tPool, int& radio){
    int surface;
    surface = round(radio * pow(2, 3.1416));

    tPool.setSurface(to_string(surface));
}

void RoundPoolBuilder::buildDiameter(RoundPool& pool, int& radio){
    int diameter = radio *2;
    pool.setDiameter(to_string(diameter));
}

void RoundPoolBuilder::buildColor(RoundPool& tPool, string& tColor){
    tPool.setColor(tColor);
}

void RoundPoolBuilder::buildMaterial(RoundPool& tPool, string& tMaterial){
    tPool.setMaterial(tMaterial);
}

RoundPool RoundPoolBuilder::buildPool(int& radio, string& color, string& material){
    RoundPool pool;
    buildSurface(pool, radio);
    buildDiameter(pool, radio);
    buildColor(pool, color);
    buildMaterial(pool, material);

    return pool;
}