#include <iostream>
using namespace std;
template <class T>
T add(T x, T y)
{
    return x + y;
}
template <class T, class R> //declare everytime
void add1(T x, R y)         //multiple types
{
    cout << x + y;
}
int main()
{
    int z = add(1, 2);
    cout << z << endl;
    add1(1, 2.2);
}