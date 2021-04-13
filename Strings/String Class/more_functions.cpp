#include <string>
#include <iostream>
using namespace std;
int main()
{
    string s = "Hello";
    //append()
    cout << s.append("World") << endl;

    //insert(position,string)
    //insert(position,string,n)    n:length of string to be inserted
    cout << s.insert(5, " ") << endl;

    //replace(start,total to be replaced,string)
    string t = "programming";
    cout << t.replace(1, 4, "kk") << endl;

    //erase() - just like clear

    //push_back()   -push a char at end of string
    t.push_back('x');
    cout << t << endl;

    //pop_back()   -removes the last char of string
    t.pop_back();
    cout << t << endl;

    //swap
    string x = "Programming";
    string y = "C++";
    x.swap(y);
    cout << x << endl;
}