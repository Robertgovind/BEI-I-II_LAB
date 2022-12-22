//WAP to find area of square,rectangleand triangle using function overloading
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
float area(float r){
                 const float pi=3.124;
                 float area=pi*r*r;
                 return area;
                 
                 }
float area(float len,float br){
                 float area=len*br;
                 return area;
                 
                 }
float area(float a,float b ,float c ){
                 float s=(a+b+c)/3;
                 float area=0.5*pow((s*(s-a)*(s-b)*(s-c)),0.5);
                 return area;
                 
                 }
int main()
{
          cout<<"The area of the circle: "<<area(7)<<endl;
          cout<<"The area of the rectangle: "<<area(4,4)<<endl;
          cout<<"The area ot the triangle: "<<area(5,4,3)<<endl;
          getch();
          
          return 0;
          }
