#include <iPoolBuilder.h>


class RectanglePoolBuilder  :   public  iPoolBuilder
{
public:
    RectanglePoolBuilder();
    ~RectanglePoolBuilder();
    void buildSurface(Pool& tPool, int sideA, int sideB);
    void buildColor(Pool& tPool, string tColor);
    void buildMaterial(Pool& tPool, string tMaterial);
    Pool buildPool(int sideA, int sideB, string color, string material);
};

