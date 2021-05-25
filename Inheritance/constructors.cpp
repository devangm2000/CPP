#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Non param  of Base" << endl;
    }
    Base(int x)
    {
        cout << "Param of Base:" << x << endl;
    }
};
class Derive : public Base
{
public:
    Derive()
    {
        cout << "Non param of Derive" << endl;
    }
    Derive(int y)
    {
        cout << "Param of Derive:" << y << endl;
    }
    Derive(int x, int y) : Base(x) //calling param of Base
    {
        cout << "Param of Derive:" << y << endl;
    }
};
int main()
{
    Derive d;      //non param of both Base and Derive will execute
    Derive d1(5);  //non param of Base and param of Derive
    Derive(10, 5); //param of both Base and Derive
    //non param of Base will execute automatically unless we specify like 3rd case
}