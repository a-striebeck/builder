#ifndef POOL_H
#define POOL_H

#include <string>

class Pool
{
private:
    std::string surface;
    std::string color;
    std::string material;

public:
    virtual ~Pool() = default;  // Asegúrate de incluir un destructor virtual
    virtual void showDetails() const = 0;

    // Setters
    void setSurface(const std::string& tSurface) { surface = tSurface; }
    void setColor(const std::string& tColor) { color = tColor; }
    void setMaterial(const std::string& tMaterial) { material = tMaterial; }

    // Getters
    std::string getSurface() const { return surface; }
    std::string getColor() const { return color; }
    std::string getMaterial() const { return material; }
};

#endif // POOL_H
