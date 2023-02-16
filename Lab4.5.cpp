#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    int inch;

public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    Distance(float m)
    {
        float tfeet = m * 3.2808;
        feet = int(tfeet);
        inch = (tfeet - feet) * 12;
    }
    void display()
    {
        cout << feet << " f " << inch << " inch" << endl;
    }
};
int main()
{

    Distance d;
    float meter;
    cout << "Enter distane in meter: " << endl;
    cin >> meter;
    d = meter;
    cout << "The converted distance is: " << endl;
    d.display();
    return 0;
}