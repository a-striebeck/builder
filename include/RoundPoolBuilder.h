#ifndef  ROUNDPOOLBUILDER_H
#define ROUNDPOOLBUILDER_H
#include "iPoolBuilder.h"
#include "RoundPool.h"
#include <string>


class RoundPoolBuilder  :   public  iPoolBuilder
{
public:
    RoundPoolBuilder();
    ~RoundPoolBuilder();
    void buildSurface(RoundPool& tPool, int& radio);
    void buildDiameter(RoundPool& pool, int& radio);
    void buildColor(RoundPool& tPool, std::string& tColor);
    void buildMaterial(RoundPool& tPool, std::string& tMaterial);
    RoundPool buildPool(int radio, std::string& color, std::string& material);
};

#endif // ROUNDPOOLBUILDER_H
