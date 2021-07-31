#include <iostream>
using namespace std;
#define PI 3.1425 //symbolic constant
// #define PI 3      //rewriting(gives error but value is updated)
//if not defined:
#ifndef PI1
#define PI1 3
#endif

//using functions
#define max(x, y) (x > y ? x : y) //use brackets else error
#define square(x) (x * x)
#define msg(x) #x //returns string

int main()
{
    cout << PI << endl;
    cout << PI1 << endl;
    cout << max(1, 2) << endl;
    cout << square(5) << endl;
    cout << msg(hello) << endl; //no " " here
}