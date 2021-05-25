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
    friend ostream &operator<<(ostream &out, Complex c);
};
ostream &operator<<(ostream &out, Complex c)
{
    cout << c.real + "+i" << c.imaginary;
    return out;
}
int main()
{
    Complex c1(10, 5);
    cout << c1;
}