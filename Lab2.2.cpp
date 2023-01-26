#include<iostream>
using namespace std;
class complex
{
    private:
    int real;
    int img;
    public:
    complex(){
        cout<<"I am inside constructor."<<endl;
    }
    ~complex(){
        cout<<"I am inside destructor."<<endl;
    }
};
int main(){
    complex c1,c2,c3;

    return 0;
}