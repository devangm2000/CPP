#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    int a = 10, b = 20, c, d;
    c = add(a, b);
    cout << c << endl;
    d = add(a, b, c);
    cout << d << endl;
}
//int add(int,int)
//float add(int,int)    -both are same functions hence conflict
//return type is not consider- name and parameters are considered