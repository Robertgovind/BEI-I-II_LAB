#include<iostream>
using namespace std;
class secondComplex;
class firstComplex{
    private:
    int real;
    int img; 
    public:
    firstComplex(){
        real=0;
        img=0;
    }
    firstComplex(int r,int i){
        real=r;
        img=i;
    }
    friend void addComplex(firstComplex,secondComplex);
};
class secondComplex{
    private:
    int real;
    int img;
    public:
    secondComplex(){
        real=0;
        img=0;
    }
    secondComplex(int r,int i){
        real=r;
        img=i;
    }
  friend void addComplex(firstComplex,secondComplex);
};
int main(){
    firstComplex f(5,5);
    secondComplex s(4,4);
    addComplex(f,s);
     
    return 0;
}
 void addComplex(firstComplex c1,secondComplex c2){
     int real=c1.real+c2.real;
     int img=c1.img+c2.img;
     cout<<"The sum of the complex numbers:"<<endl;
     cout<<real<<"+"<<img<<"i";

}