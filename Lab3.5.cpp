#include <iostream>
using namespace std;
class Details;
class Name
{
private:
    char name[20];

public:
    void readName()
    {
        cout << "Enter name: " << endl;
        cin >> name;
    }
    friend class Details;
};
class Details
{
private:
    char address[15];
    int roll;

public:
    void readDetails()
    {
        cout << "Enter address: " << endl;
        cin >> address;
        cout << "Enter roll no: " << endl;
        cin >> roll;
    }
    void showAll()
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Roll no: " << roll << endl;
    }
};
int main()
{

    Name n;
    n.readName();
    Details d;
    d.readDetails();
    d.showAll();
    return 0;
}