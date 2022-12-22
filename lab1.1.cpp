//Write a program using constant qualifers
#include<iostream>
#include<conio.h>
#define len 6;
using namespace std;

int main()
{
          const float pi=3.124;  
          float r;
          cout<<"Enter the radius of the circle: ";
          cin>>r;
          float area=pi*r*r;
          cout<<"The area of the circle is :" <<area;
          //trying to change constant value will give error
          //pi=2;
          
          
          //Now we are using defined constant
          float areaOfSquare=len*len;
          cout<<endl<<"The area of the square is :"<<areaOfSquare;
          getch();
          return 0;
          }
