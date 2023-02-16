//to illustrate this pointer
#include<iostream>
using namespace std;
class coordinate{
    private:
    int x,y;
    public:
    void getaddress(){
        cout<<"the address using this pointer is: "<<this<<endl;
    }
};
int main(){
    coordinate c;
    c.getaddress();
    cout<<"the address uing direct method is : "<<&c<<endl;
    return 0;
}