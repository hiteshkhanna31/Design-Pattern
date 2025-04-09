#include "shape.hpp"
#include <memory>

class ShapeFactory {
public:
    static std::unique_ptr<Shape> createShape(const std::string& shapeType) 
    {
        if (shapeType == "circle") 
        {
            return std::make_unique<Circle>();
        } 
        else if (shapeType == "rectangle") 
        {
            return std::make_unique<Rectangle>();
        } 
        else if (shapeType == "triangle") 
        {
            return std::make_unique<Triangle>();
        } 
        else 
        {
            return nullptr;
        }
    }
};
