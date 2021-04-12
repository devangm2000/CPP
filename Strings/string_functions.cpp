#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    //length, concatenate and copy
    char s[20] = "Devang";
    cout << strlen(s) << endl;

    char a[10] = "abcd";
    char b[20] = "efgh";
    strcat(a, b); //(destination,source)
    // strncat(a,b,3);  length of source also given
    cout << a << endl;

    char c[20];
    char d[] = "Hello";
    strcpy(c, d); //(destination ,source)
    cout << c;
    // strncpy(c,d,3)   length of source also given
}