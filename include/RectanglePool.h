#include <Pool.h>

class RectanglePool : public Pool
{
private:
    int sideA;
    int sideB;
public:
    RectanglePool();
    ~RectanglePool();
    void showDetails();
};
