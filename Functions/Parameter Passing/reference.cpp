#include <iostream>
using namespace std;
void swap(int &a, int &b) //creating a reference i.e another variable
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 10, y = 20;
    swap(x, y);
    cout << x << " " << y; //values will be changed
}