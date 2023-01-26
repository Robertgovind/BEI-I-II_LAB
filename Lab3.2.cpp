//To illustrate the concept of static function
#include<iostream>
using namespace std;
class counter{
    private:
    static int count;
    int num;
    public:
    counter(int n)
    {
      num=n;
      count++;
    }
    static void displayCount(){
        cout<<"The count is: "<<count<<endl;
    }
};
int counter ::count;
int main(){
    counter c1(4);
    c1.displayCount();
    counter c2(8);
    c2.displayCount();
    return 0;
}