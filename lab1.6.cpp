//WAP using class and object and use the member function to initialize the class data members
#include<iostream>
#include<conio.h>
using namespace std;
class imag{
           private:
                   int real;
                   int img;
           public:
                   void initial()
                   {
                                  real=5;
                                  img=7;
                                  }
                   void display(){
                                  cout<<"The default initialized value is : "<<endl;
                                  cout<<real<<"+"<<img<<"i"<<endl;
                                  }
           
           };
int main()
{
          imag i;
          i.initial();
          i.display();
          getch();
          return 0;
          }
