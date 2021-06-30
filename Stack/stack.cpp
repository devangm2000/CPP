#include <iostream>
using namespace std;
class stack
{
private:
    int *stk; //ptr to an array for stroing elements
    int top;
    int size;

public:
    stack(int sz)
    {
        size = sz;
        top = -1;
        stk = new int[size];
    }
    void push(int x);
    int pop();
    void print();
};
void stack::push(int x)
{
    if (top == size - 1)
    {
        cout << "Stack is full";
    }
    else
    {
        top++;
        stk[top] = x;
    }
}
int stack::pop()
{
    int x = 0;
    if (top == -1)
    {
        cout << "Stack is empty";
    }
    else
    {
        x = stk[top];
        top--;
    }
    return x;
}
void stack::print()
{
    for (int i = 0; i <= top; i++)
    {
        cout << stk[i] << " ";
    }
}
int main()
{
    stack s(10);
    s.push(5);
    s.push(15);
    s.push(10);
    s.pop();
    s.print();
}