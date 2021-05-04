#include <iostream>
using namespace std;
template <class T>
T add(T x, T y)
{
    return x + y;
}
int main()
{
    int a = add(10, 5);        //int
    float b = add(1.1f, 2.2f); //float
    cout << a << " " << b;
}