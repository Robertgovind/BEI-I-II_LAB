#include <iostream>
#define pi 3.124;
using namespace std;
class SHAPE
{
public:
    virtual void getPerimeter() = 0; // using pure virtural function

    // virtual void getPerimeter(){ }  this is just a virtual function
};
class SQUARE : public SHAPE
{
private:
    float length;

public:
    SQUARE()
    {
        length = 0;
    }
    SQUARE(float l)
    {
        length = l;
    }

    void getPerimeter()
    {
        cout << "The perimeter of the square is : " << endl;
        cout << (length * length);
    }
};
class CIRCLE : public SHAPE
{
private:
    float radius;

public:
    CIRCLE()
    {
        radius = 0;
    }
    CIRCLE(float r)
    {
        radius = r;
    }
    void getPerimeter()
    {
        cout << "The perimeter of the circle is : " << endl;
        cout << (2 * 3.142 * radius);
    }
};
int main()
{

    SHAPE *sp; // pointer of base class whch points to the other child classes
    SQUARE sq(4);
    CIRCLE c(7);
    cout << "for the square: " << endl;
    sp = &sq; // now it will point to the square child class
    sp->getPerimeter();
    cout << "\nfor the circle: " << endl;
    sp = &c; // now it will point to the circle child class
    sp->getPerimeter();
    return 0;
}