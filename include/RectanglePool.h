#ifndef RECTANGLEPOOL_H
#define RECTANGLEPOOL_H

#include "Pool.h"

class RectanglePool : public Pool
{
private:
    int sideA;
    int sideB;

public:
    RectanglePool();
    ~RectanglePool() override;
    
    void showDetails() const override;

    // Setters
    void setSideA(int side);
    void setSideB(int side);

    // Getters
    int getSideA() const;
    int getSideB() const;
};

#endif // RECTANGLEPOOL_H
