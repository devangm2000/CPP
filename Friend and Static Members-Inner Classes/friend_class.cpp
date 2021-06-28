#include <iostream>
using namespace std;
class Answer; //have to define class always as friend function uses it
class Test
{
private:
    int a;

protected:
    int b;

public:
    int c;
    friend Answer; //defining friend function/class
};
//friend function/class-global function/class which can access all members of a class using an object
class Answer
{
    void example()
    {
        Test t; //necessary
        cout << t.a << t.b << t.c;
    }
};

int main() {}
