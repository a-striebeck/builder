#ifndef  ROUNDPOOL_H
#define ROUNDPOOL_H
#include "Pool.h"
#include <string>

class RoundPool : public Pool
{
private:
    std::string diameter;
public:
    RoundPool();
    ~RoundPool();
    void setDiameter(const std::string& tDiameter);
    std::string getDiameter() const;
    void showDetails() const override;

};

#endif // ROUNDPOOL_H