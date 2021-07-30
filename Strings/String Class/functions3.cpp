#include <string>
#include <iostream>
using namespace std;
int main()
{
    //copy:copies into a character array
    //copy(char array,length to be copied)
    string a = "Hello";
    char str[20];
    a.copy(str, a.length());
    str[5] = '\0';
    cout << str << endl;

    // find:for finding occurenceos string/char inside another string
    string s = "How are you";
    cout << s.find("abc") << endl;
    cout << s.find("o") << endl;
    // rfind(): seaarches from right but gives index from left only
    cout << s.rfind("o") << endl;
    cout << s.find("is") << endl; //not present so largest string size will be shown

    //find_first_of() and find_last_of()
    string t = "Hello World";
    cout << t.find_first_of("l") << endl;
    cout << t.find_first_of("le") << endl; //not string le but will find individual characters l or e
    //find_first_of(char,index) starts finding from the index specified
    cout << t.find_last_of("l") << endl;
    //find_last_of(char,index) starts finding from the index specified
}
