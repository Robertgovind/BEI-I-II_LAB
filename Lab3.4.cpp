#include <iostream>
using namespace std;
class Distance
{
private:
    int centi;
    int meter;

public:
    void readData()
    {
        cout << "Enter ecntimeter: " << endl;
        cin >> centi;
        cout << "Enter meter: " << endl;
        cin >> meter;
    }
    void displayData()
    {
        cout << meter << "m " << centi << "c" << endl;
    }

   friend Distance add(Distance , Distance);
};
 Distance add(Distance f, Distance s)
    {
        Distance temp;
        temp.meter = f.meter + s.meter;
        temp.centi = f.centi + s.centi;
        while (temp.centi >= 100)
        {
            temp.meter++;
            temp.centi = temp.centi - 100;
        }
        return temp;
    }
int main()
{
    Distance d1, d2, sum;
    d1.readData();
    d2.readData();
    sum = add(d1, d2);
    cout << "The sum of the distance is : " << endl;
    sum.displayData();
    return 0;
}
