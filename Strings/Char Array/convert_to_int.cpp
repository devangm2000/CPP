#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    //conversion from string to int,float
    char s1[] = "100";
    char s2[] = "234.15";
    long int x = strtol(s1, NULL, 10); //NULL has to be written; 10=base
    float y = strtof(s2, NULL);
    cout << x + 1 << endl
         << y - 1 << endl;
}