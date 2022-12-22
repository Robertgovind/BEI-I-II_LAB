#include<iostream>
#include<conio.h>
using namespace std;
class customer{
           private:
                   char customerName[20];
                   char product;
                   float amount;
                    
           public:
                    void readdata(){
                                    
                                    
                                    cout<<"Enter the name: ";
                                    cin>>customerName;
                                    cout<<endl<<"Enter the product name: ";
                                    cin>>product;
                                    fflush(stdin);
                                    cout<<endl<<"Enter the amount :";
                                    cin>>amount;
                                    }
                    void processAmount()
                    {
                                        cout<<"*************************"<<;
                                        cout<<endl<<"coustomer Name: "<<customerName;
                                        cout<<endl<<"Product Name: "<<product;
                                        if(amount>2000)
                                        amount=amount*0.05+amount;
                                        cout<<endl<<"Amount: "<<amount; 
                    
                                        }
                    
           };
int main()
{ 
          customer c;
          c.readdata();
          c.processAmount();
          getch();
          return 0;
          }
