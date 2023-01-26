//To illustrate the idea of array of objects
#include<iostream>
using namespace std;
class Employee
{
    private:
    char name[20];
    int age;
    char address[15];
    float salary;
    public:
    void readData(){
        cout<<"Enter name: "<<endl;
        cin>>name;
        cout<<"Enter address: "<<endl;
        cin>>address;
        cout<<"Enter age: "<<endl;
        cin>>age;
        cout<<"Ener salary: "<<endl;
        cin>>salary;
    }
   void displayData(){
    cout<<"Name: "<<name<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Salary: "<<salary<<endl;
   }
};
int main()
{
    Employee e[10];
    for(int i=0;i<9;i++)
    e[i].readData();
    cout<<"************************************"<<endl;
    for(int i=0;i<9;i++)
    e[i].displayData();
    return 0;
}