#include <iostream>
using namespace std;
//defined two global functions with same name
namespace First
{
    void fun()
    {
        cout << "First" << endl;
    }
    //can have more data,functions also
    int x = 20;
}
namespace Second
{
    void fun()
    {
        cout << "Second" << endl;
    }
}
using namespace First; //no need for First::fun() then
// all functions under First will then be executed
int main()
{
    fun();
    Second::fun();
    cout << x << endl;
}