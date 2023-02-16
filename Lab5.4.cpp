// to illustrate the concept of function overriding
#include <iostream>
using namespace std;

class person
{
protected:
    char name[20];
    char address[20];

public:
    void get()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the address : ";
        cin >> address;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};
class student : public person
{
private:
    int roll;
    float marks;

public:
    void get()
    {
        cout << "Enter roll no: ";
        cin >> roll;
        cout << "Enter marks: ";
        cin >> marks;
    }
    void display()
    {
        cout << "Roll No: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main()
{

    student s;
    s.person::get();
    s.get();
    s.person::display();
    s.display();
    return 0;
}