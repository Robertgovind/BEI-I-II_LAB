#include<iostream>
using namespace std;
class complex
{
  private:
  int real;
  int img;
  public:
  complex()
  {
    real=0;
    img=0;
  }
  complex(int r, int i){
    real=r;
    img=i;
  }
  complex(complex &c){
    real=c.real;
    img=c.img;
  }
  void display(){
    cout<<real<<"+"<<img<<"i"<<endl;
  }
};
int main(){
    complex c1,c2(4,5),c3(c2);
    cout<<"Default constructor:"<<endl;
    c1.display();
    cout<<"Parameterized constructor:"<<endl;
    c2.display();
    cout<<"Copy constructor:"<<endl;
    c3.display();
    return 0;

}