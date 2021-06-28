#include <iostream>
using namespace std;
class Outer
{
public:
    int a = 10;
    static int b;
    void func()
    {
        i.func1();
        cout << i.x;
    }
    class Inner
    {
    public:
        int x = 25;
        void func1()
        {
            cout << b << endl; //inner class can access only static members of Outer class
            //Outer class can access all members(public) of Inner class
        }
    };
    Inner i; //have to create object inside Outer class after declaring Inner class
};
int Outer::b = 1;
int main()
{
    Outer o;
    o.func();
}
