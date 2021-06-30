#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 0, c;
    try
    {
        if (b == 0)
        {
            throw 101; //can throw strings also
        }
        c = a / b;
        cout << c;
    }
    catch (int e)
    {
        cout << "Exception Occurred.Code:" << e;
    }
}
//Types of errors-
// 1. Syntax
// 2. Logical
// 3. Runtime-define exceptions for these
