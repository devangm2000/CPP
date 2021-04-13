#include <string>
#include <iostream>
using namespace std;
int main()
{
    string a = "Hello";
    cout << a << endl;
    string b;
    getline(cin, b);
    cout << b;
}
