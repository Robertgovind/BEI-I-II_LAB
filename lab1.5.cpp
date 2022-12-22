//WAP to add three integer variaables using function ans illustrating the concept of default argument
#include<iostream>
#include<conio.h>
using namespace std;
class integer{
              private:
                      int a,b,c;
              public:
                      int adddef(int x=1,int y=2, int z=3){
                                     
                                     return(x+y+z); 
                                     }
                      int add(int x,int y,int z){
                                  return(x+y+z);
                                  }
              };
int main()
{
          integer i;
          cout<<"The default adding is : "<<i.adddef();
          cout<<endl<<"The actual adding is :"<<i.add(5,4,3);
          getch();
          return 0;
          }
