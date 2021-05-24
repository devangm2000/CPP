#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(int real = 0, int imaginary = 0)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    Complex operator+(Complex c)
    {
        Complex t;
        t.real = real + c.real;
        t.imaginary = imaginary + c.imaginary;
        return t;
    }
    int getReal()
    {
        return real;
    }
    int getImag()
    {
        return imaginary;
    }
};
int main()
{
    Complex c1(3, 4);
    Complex c2(0, 2);
    Complex c3 = c1 + (c2); //directly use the operator=>no need for function name
    cout << c3.getReal() << " " << c3.getImag();
}