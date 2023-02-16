// to illustrate multilevel inheritance as in figure given
#include <iostream>
using namespace std;
class parent
{
protected:
    char name[20], address[20];

public:
    void getdata()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter address: ";
        cin >> address;
    }
    void outdata()
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};
class child1 : public parent
{
protected:
    int roll;
    long int phone;

public:
    void get()
    {
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter phone: ";
        cin >> phone;
    }
    void out()
    {
        cout << "Roll No: " << roll << endl;
        cout << "Phone: " << phone << endl;
    }
};
class child2 : public child1
{
private:
    int age, price;

public:
    void takedata()
    {
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter price: ";
        cin >> price;
    }
    void display()
    {
        outdata();
        out();
        cout << "Age: " << age << endl;
        cout << "Price: " << price << endl;
        ;
    }
};
int main()
{
    child2 ch;
    ch.getdata();
    ch.get();
    ch.takedata();
    ch.display();
    return 0;
}