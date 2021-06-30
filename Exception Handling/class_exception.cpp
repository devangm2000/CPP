#include <iostream>
using namespace std;
class MyException : public exception //public library
{
};
int division(int x, int y) throw(MyException)
{
    if (y == 0)
        throw MyException();
    return x / y;
}
int main()
{
    int a = 10, b = 0, c;
    try
    {
        c = division(a, b);
        cout << c;
    }
    catch (MyException e) //change here
    {
        cout << "Exception Occurred."; //no e here
    }
}