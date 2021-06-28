#include <iostream>
using namespace std;
class Test
{
private:
    int a; //non static
    int b;

public:
    static int count; //declaring static variable
    Test()
    {
        a = 10, b = 20;
        count++;
    }
    static int getCount()
    {
        return count; //can access only static variables in static funtions
    }
};
//have to declare static variable using scope resolution
//its a global variable but only accessible using class
int Test::count = 0;
int main()
{
    cout << Test::count << endl;
    Test a;
    Test b;
    cout << a.count << endl;
    cout << b.count << endl;
}
