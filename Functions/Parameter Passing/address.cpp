#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a; //changing the values of x and y(dereferencing)
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 10, y = 20;
    swap(&x, &y);
    cout << x << " " << y;
}