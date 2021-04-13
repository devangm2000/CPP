#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    //substring and compare
    char a[10] = "football";
    cout << strstr(a, "ba") << endl; //(main,sub): gives the portion of the string starting from sub
    char b[10] = "bal";
    cout << strstr(a, b) << endl;

    //strstr: for a string; strchr: for a char
    //strrchr: from the right

    char s1[] = "Hello";
    char s2[] = "Hello";
    cout << strcmp(s1, s2) << endl; //returns -ve, 0 or +ve difference
    //if 1st string greater than 2nd(ASCII) then +ve else -ve
    char s3[] = "hello";
    char s4[] = "Hello";
    cout << strcmp(s3, s4) << endl; //+ve i.e s3 is greater(ASCII code wise)

    char s5[] = "minor";
    char s6[] = "elder";
    cout << strcmp(s5, s6) << endl;
}