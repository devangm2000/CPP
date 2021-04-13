#include <iostream>
using namespace std;
int main()
{
    char s[10];
    cin >> s; //single string

    cin.ignore(); //else next cin takes \n as input

    cout << "Enter your name:";
    char t[20];
    cin.getline(t, 20); //multiple strings(can use .get() also)

    // cin.ignore();

    cout << "Using pointer:"; //problem in this
    char *p;
    // cin >> p; or
    // cin.getline(p, 100);
}