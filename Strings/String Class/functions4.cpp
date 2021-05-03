#include <string>
#include <iostream>
using namespace std;
int main()
{
    // substr(start,number)    number=how many from start
    string x = "Hello world";
    cout << x.substr(3) << endl;
    cout << x.substr(3, 4) << endl;

    // compare(str)     //-ve,0 or +ve result
    string str2 = "Hi";
    cout << str2.compare(x) << endl;
    //if both equal=0
}