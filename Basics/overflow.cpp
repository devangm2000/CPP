#include <iostream>
using namespace std;

int main()
{
    // char only from -128 to 127
    // if value out of bounds, value is changed in a cyclic manner
    char x = -127;
    x++;

    //same for integer(goes in a cyclic manner)
    int y = INT_MAX;
    y++;

    cout << (int)x;
    return 0;
}
