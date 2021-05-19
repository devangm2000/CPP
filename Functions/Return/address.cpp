#include <iostream>
using namespace std;
int *func(int size)
{
    int *p = new int[5];
    for (int i = 0; i < size; i++)
    {
        p[i] = i;
    }
    return p;
}
int main()
{
    int *ptr = func(5);
    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i];
    }
}