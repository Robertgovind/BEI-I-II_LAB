#include <iostream>
using namespace std;
class student
{
protected:
    int roll;

public:
    void sget()
    {
        cout << "Enter roll no: ";
        cin >> roll;
    }
    void sdisplay()
    {
        cout << "Roll no: " << roll << endl;
    }
};
class test : virtual public student
{
protected:
    char name[20];
    int testMark;

public:
    void tget()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter test marks: ";
        cin >> testMark;
    }
    void tdisplay()
    {
        cout << "Name: " << name << endl;
        cout << "Test: " << testMark << endl;
    }
};
class sport : virtual public student
{
protected:
    int sportMark;

public:
    void spget()
    {
        cout << "Enter sport marks : ";
        cin >> sportMark;
    }
    void spdisplay()
    {
        cout << "Sport: " << sportMark << endl;
    }
};
class result : public test, public sport
{
private:
    float fee;
    int total;

public:
    void rget()
    {
        cout << "Enter total fee : ";
        cin >> fee;
    }
    void rdisplay()
    {
        sdisplay();
        tdisplay();
        spdisplay();
        cout << "Total fee: " << fee << endl;
        cout << "Total Marks : " << (testMark + sportMark) << endl;
    }
};
int main()
{
    result r;
    r.sget();
    r.tget();
    r.spget();
    r.rget();
    cout << "Whole Details: " << endl;
    r.rdisplay();
    return 0;
}