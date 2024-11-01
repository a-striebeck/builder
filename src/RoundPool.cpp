#include "RoundPool.h"
#include <iostream>

RoundPool::RoundPool()
{
}

RoundPool::~RoundPool()
{
}
void RoundPool::setDiameter(const std::string& tDiameter) {
    diameter = tDiameter;
}

std::string RoundPool::getDiameter() const {
    return diameter;
}
void    RoundPool::showDetails()const{
    std::cout << "Surface: " << getSurface()    << std::endl;
    std::cout << "Diameter: " << getDiameter()  << std::endl;
    std::cout << "Color: " << getColor()        << std::endl;
    std::cout << "Material: " << getMaterial()  << std::endl;
}
