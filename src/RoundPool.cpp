#include <RoundPool.h>
#include <iostream>

RoundPool::RoundPool()
{
}

RoundPool::~RoundPool()
{
}
void    RoundPool::setDiameter(string& tDiameter){
    diameter = tDiameter;
}  
string  RoundPool::getDiameter() const{
    return diameter;
}
void    RoundPool::showDetails(){
    std::cout << "Surface: "    << getSurface() << endln;
    std::cout << "Diameter: "   << getDiameter()<< endln;
    std::cout << "Color: "      << getColor()   << endln;
    std::cout << "Material: "   << getMaterial()<< endln;
}
