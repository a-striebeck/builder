#include <string>

class Pool
{
private:

    std::string size;
    std::string color;
    std::string material;

public:
    virtual void showDetails() = 0;
    //Setters

    void setSize(std::string tSize){ size = tSize; }
    void setColor(std::string tColor){ color = tColor; }
    void setMaterial(std::string tMaterial){ material = tMaterial; }

    //Getters

    std::string getSize() { return size; }
    std::string getColor() { return color; }
    std::string getMaterial() { return material; }
};
