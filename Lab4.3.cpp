#include <iostream>
using namespace std;
class Distance
{
private:
    float meter;
    float centimeter;

public:
    Distance()
    {
        meter = 0;
        centimeter = 0;
    }
    Distance(float m, float c)
    {
        meter = m;
        centimeter = c;
    }
    friend Distance operator+(Distance f, Distance s);

    void display()
    {
        cout << meter << "m " << centimeter << "cm" << endl;
    }
};
Distance operator+(Distance f, Distance s)
{
    Distance temp;
    temp.meter = f.meter + s.meter;
    temp.centimeter = f.centimeter + s.centimeter;
    while (temp.centimeter >= 100)
    {
        temp.meter++;
        temp.centimeter -= 100;
    }
    return temp;
}
int main()
{
    Distance d1(15, 67), d2(33, 90), sum;
    sum = d1 + d2;
    sum.display();
    return 0;
}