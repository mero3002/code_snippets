#include <iostream>
using namespace std;

class Shape{
    public:
        virtual float area() = 0; // pure virtual, a contract
        virtual ~Shape(){
            cout << "Shape Des\n";
        }
};

class Rectangle : public Shape{
    float h;
    float w;

    public:
        Rectangle(float h=1, float w=1):h{h}, w{w} {
            cout << "Rectangle Const\n";
        }
        float area() override {
            return h * w;
        }
        ~Rectangle(){
            cout << "Rectangle Des\n";
        }
};

class Circle : public Shape{
    float r;

    public:
        Circle(float r=1):r{r} {
            cout << "Circle Const\n";
        }
        float area() override {
            return (22/7) * (r * r);
        }
        ~Circle(){
            cout << "Circle Des\n";
        }
};

class Square : public Shape{
    float s;

    public:
        Square(float s=1):s{s} {
            cout << "Square Const\n";
        }
        float area() override {
            return s * s;
        }
        ~Square(){
            cout << "Square Des\n";
        }
};