#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the number:";
    int n;
    cin >> n;
    cout << "The factorial is:";
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact =fact*i;
    }
    cout << fact;
}
