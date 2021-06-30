#include <iostream>
using namespace std;
class MyException1 : exception
{
};
class MyException2 : public MyException1
{
};
int main()
{
    try
    {
        throw MyException2();
    }
    catch (MyException2 e) //child class above parent class
    {
        cout << "Exception2";
    }
    catch (MyException1 e) //parent class below child class
    {
        cout << "Exception1";
    }
    catch (...) //always at the end
    {
        cout << "Rest of the cases";
    }
}