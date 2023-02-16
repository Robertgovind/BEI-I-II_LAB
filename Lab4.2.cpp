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
    Distance operator+(Distance d)
    {
        Distance temp;
        temp.meter = meter + d.meter;
        temp.centimeter = centimeter + d.centimeter;
        while (temp.centimeter >= 100)
        {
            temp.meter++;
            temp.centimeter -= 100;
        }
        return temp;
    }
    void display()
    {
        cout << meter << "m " << centimeter << "cm" << endl;
    }
};
int main()
{
    Distance d1(15, 67), d2(33, 90), sum;
    sum = d1 + d2;
    sum.display();
    return 0;
}