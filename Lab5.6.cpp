#include <iostream>
using namespace std;
class person
{
public:
    person()
    {
        cout << "Inside person class constructor." << endl;
    }
    ~person()
    {
        cout << "Inside person class destructor." << endl;
    }
};
// class student : public person
// {
// public:
//     student()
//     {
//         cout << "Inside student class constructor." << endl;
//     }
//     ~student()
//     {
//         cout << "Inside student class destructor." << endl;
//     }
// };
class employee
{
public:
    employee()
    {
        cout << "Inside employee class constructor. " << endl;
    }
    ~employee()
    {
        cout << "Inside employee class destructor." << endl;
    }
};
class result : public person, public employee
{
public:
    result()
    {
        cout << "Inside result class constructor." << endl;
    }
    ~result()
    {
        cout << "Inside reslut class destructor." << endl;
    }
};
// person,student for single inheritence
// perosn ,employee,reslut for multiple inheritence
int main()

{
    // student s;
    result r;
    return 0;
}