//Write a program to define enumerator of your choiceand instad of default value, assign your own valueto the enumerator
#include<iostream>
#include<conio.h>
using namespace std;
 enum shapes{
                 triangle,
                 circle,
                 rectangle,
                 square
                 };
 enum students{
               Govind=15,
               Dhiraj,
               Aagman=1,
               Upendra
               };
int main()
{
          cout<<"The default values are as follows:"<<endl;
          cout<<triangle<<endl<<circle<<endl<<rectangle<<endl<<square<<endl;
          cout<<"The value assigled by me are: "<<endl;
          cout<<Govind<<endl<<Dhiraj<<endl<<Aagman<<endl<<Upendra<<endl;  
          getch(); 
          return 0;
          }
