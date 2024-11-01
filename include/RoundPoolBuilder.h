#include <iPoolBuilder.h>


class RoundPoolBuilder  :   public  iPoolBuilder
{
public:
    RoundPoolBuilder();
    ~RoundPoolBuilder();
    void buildSurface(RoundPool& tPool, int& radio);
    void buildColor(RoundPool& tPool, string& tColor);
    void buildMaterial(RoundPool& tPool, string& tMaterial);
    RoundPool buildPool(int radio, string& color, string& material);
};

