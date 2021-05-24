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
    friend Complex operator+(Complex c1, Complex c2); //define friend function outside class always
    int getReal()
    {
        return real;
    }
    int getImag()
    {
        return imaginary;
    }
};
Complex operator+(Complex c1, Complex c2) //defined diff than normal functions
{
    Complex t;
    t.real = c1.real + c2.real;
    t.imaginary = c1.imaginary + c2.imaginary;
    return t;
}
int main()
{
    Complex c1(1, 2);
    Complex c2(0, 1);
    Complex c3;
    c3 = c1 + c2;
    cout << c3.getReal() << " " << c3.getImag();
    return 0;
}