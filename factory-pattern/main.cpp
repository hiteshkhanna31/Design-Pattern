#include "shapefactory.hpp"

int main() 
{
    auto shape1 = ShapeFactory::createShape("circle");
    auto shape2 = ShapeFactory::createShape("rectangle");
    auto shape3 = ShapeFactory::createShape("triangle");
    auto shapeInvalid = ShapeFactory::createShape("hexagon");

    if (shape1) shape1->draw();
    if (shape2) shape2->draw();
    if (shape3) shape3->draw();

    if (!shapeInvalid) 
    {
        std::cout << "Unknown shape type.\n";
    }

    return 0;
}
