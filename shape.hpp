#include <iostream>
#include <memory>
#include <string>

class Shape {
public:
    virtual void draw() const = 0;
    virtual ~Shape() = default;
};

class Circle : public Shape {
public:
    void draw() const override 
    {
        std::cout << "Drawing Circle\n";
    }
};

class Rectangle : public Shape {
public:
    void draw() const override 
    {
        std::cout << "Drawing Rectangle\n";
    }
};

class Triangle : public Shape {
public:
    void draw() const override 
    {
        std::cout << "Drawing Triangle\n";
    }
};
