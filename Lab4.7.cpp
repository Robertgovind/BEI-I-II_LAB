#include <iostream>
using namespace std;
class Distance1
{
private:
    int meter;
    float centi;

public:
    Distance1()
    {
        meter = 0;
        centi = 0;
    }
    Distance1(int m, float c)
    {
        meter = m;
        centi = c;
    }
    void display()
    {
        cout << meter << "m " << centi << "c" << endl;
    }
};

class Distance2
{
private:
    int feet;
    float inch;

public:
    Distance2()
    {
        feet = 0;
        inch = 0;
    }
    void readdata()
    {
        cout << "Enter the value of feet: ";
        cin >> feet;
        cout << "\n Enter the value of inch: ";
        cin >> inch;
    }
    void display()
    {
        cout << feet << "f " << inch << "inch" << endl;
    }
    // Conversion routine
    operator Distance1()
    {
        int meter;
        float centi, total;
        total = (feet + inch / 12.0) / 3.28;
        meter = (int)total;
        centi = (total - meter) * 100;
        return Distance1(meter, centi);
    }
};
int main()
{
    Distance1 d1;
    Distance2 d2;
    d2.readdata();
    d1 = d2;
    cout << "\nThe distance in feet is: " << endl;
    d2.display();
    cout << "\nThe distance in meter and centimeter is: " << endl;
    d1.display();

    return 0;
}