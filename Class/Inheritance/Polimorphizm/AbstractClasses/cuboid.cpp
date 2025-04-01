#include <iostream>
class Block
{
public:
    double height;
    virtual double getArea() = 0;
};

class Cuboid : public Block
{
private:
    double length;
    double width;

public:
    Cuboid(double length, double width, double height)
    {
        this->height = height;
        this->width = width;
        this->length = length;
    }
    double getArea() { return 2 * (length * width + length * height + width * height); }
};

class Cylinder : public Block
{
protected:
    double radius;

public:
    Cylinder(double radius, double height)
    {
        this->height = height;
        this->radius = radius;
    }
    double getArea() { return 2 * 3.14159 * radius * height + 2 * 3.14159 * radius * radius; }
};

class Cone : public Cylinder
{
private:
public:
    Cone(double radius, double height) : Cylinder(radius, height) {}
    double getArea() { return 3.14159 * radius * (radius + height); }
};

int main()
{
    Cuboid cuboid(5, 4, 3);

    Cylinder cylinder(2, 5);

    Cone cone(3, 5);

    std::cout << "Cuboid area: " << cuboid.getArea() << std::endl;
    std::cout << "Cylinder area: " << cylinder.getArea() << std::endl;
    std::cout << "Cone area: " << cone.getArea() << std::endl;

    return 0;
}