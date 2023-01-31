// Write a Cpp program to input a string and print it.

#include <iostream>
using namespace std;

void printstr(string s)
{
    cout << "The string you entered is: " << s << endl;
}
int main()
{
    string str;
    cout << "Input the string: ";
    getline(cin, str);
    printstr(str);
    return 0;
}
/*
Sample Output:

Input the string: Welcome, to 1st string program
The string you entered is: Welcome, to 1st string program
*/
