#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    float inch;

public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    Distance(int f, float i)
    {
        feet = f;
        inch = i;
    }
    operator float()
    {
        float tempMeter, meter;
        tempMeter = inch / 12;
        meter = (tempMeter + feet) / 3.2808;
        return meter;
    }
};

int main()
{
    Distance d(3, 3.37);
    float meter;
    meter = d;
    cout << "The converted distance in meter is: " << endl;
    cout << meter;
    return 0;
}