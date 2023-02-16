// to illustrate access of private,protected,public data members
#include <iostream>
using namespace std;

class person
{
    // private: Not inherited
protected:
    char name[20];
    char address[20];

public:
    void getperson()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the address : ";
        cin >> address;
    }
};
class student : public person
{
private:
    int roll;
    float marks;

public:
    void getstudents()
    {
        cout << "Enter roll no: ";
        cin >> roll;
        cout << "Enter marks: ";
        cin >> marks;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main()
{

    student s;
    s.getperson();
    s.getstudents();
    s.display();
    return 0;
}