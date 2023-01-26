//To illustrate the use of static data members in a class 
#include<iostream>
using namespace std;
class counter{
    private:
    int num;
    static int count;
    public:
    counter(int x){
        num=x;
        count++;
    }
    void displayCount()
    {
        cout<<"The number is:"<<num<<endl;
        cout<<"The count is : "<<count<<endl;
    }
};

int counter::count;

int main()
{
    counter c1(3);
    c1.displayCount();
    counter c2(4);
    c2.displayCount();
    counter c3(7);
    c3.displayCount();
    return 0;
}