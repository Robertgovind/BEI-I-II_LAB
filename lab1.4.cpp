#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class areas{
           private:
                   float r;
                   float len,br;
                   float a,b,c;
           public:
           void area(float r){
                 const float pi=3.124;
                 float area=pi*r*r;
                 cout<<"The area of the circle: "<<area<<endl;
                 
                 }
          void area(float len,float br){
                 float area=len*br;
                 cout<<"The area of the rectangle: "<<area<<endl;
                 
                 }
          void area(float a,float b ,float c ){
                 float s=(a+b+c)/3;
                 float area=0.5*pow((s*(s-a)*(s-b)*(s-c)),0.5);
                  cout<<"The area ot the triangle: "<<area;
                 }
           };
int main()
{
          areas a;
          a.area(7);
          a.area(4,4);
          a.area(5,4,3);
          getch();
          return 0;
          }
