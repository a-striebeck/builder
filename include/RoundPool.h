#include <Pool.h>

class RoundPool : public Pool
{
private:
    string diameter;
public:
    RoundPool();
    ~RoundPool();
    void setDiameter(string& tDiameter);
    string getDiameter() const;
    void showDetails();

};
