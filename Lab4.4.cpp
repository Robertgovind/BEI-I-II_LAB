#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int imag;

public:
    complex()
    {
        real = 0;
        imag = 0;
    }
    complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    complex operator++()
    {
        complex temp;
        temp.real = real++;
        temp.imag = imag++;
        return temp;
    }
    void display()
    {
        cout << real << "+i" << imag << endl;
    }
};
int main()
{
    complex c1(5, 6), c2;
    cout << "before" << endl;
    c1.display();
    ++c1;
    cout << "after" << endl;
    c1.display();
    return 0;
}
