#include "RectanglePool.h"
#include <iostream>

RectanglePool::RectanglePool() : sideA(0), sideB(0) {}  // Inicializa los miembros

RectanglePool::~RectanglePool() {}

void RectanglePool::setSideA(int side) {
    sideA = side;
}

void RectanglePool::setSideB(int side) {
    sideB = side;
}

int RectanglePool::getSideA() const {
    return sideA;
}

int RectanglePool::getSideB() const {
    return sideB;
}

void RectanglePool::showDetails() const {
    std::cout << "SideA: " << getSideA() << std::endl;
    std::cout << "SideB: " << getSideB() << std::endl;
    std::cout << "Surface: " << getSurface() << std::endl;
    std::cout << "Color: " << getColor() << std::endl;
    std::cout << "Material: " << getMaterial() << std::endl;
}

