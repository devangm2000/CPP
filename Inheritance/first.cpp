#include <iostream>
using namespace std;
class first
{
public:
    int x;
    void show()
    {
        cout << x << endl;
    }
};
class second : public first
{
public:
    int y;
    void display()
    {
        cout << x << " " << y;
    }
};
int main()
{
    first f1;
    f1.x = 10;
    f1.show();
    second s1;
    s1.x = 15;
    s1.y = 20;
    s1.show();
    s1.display();
}