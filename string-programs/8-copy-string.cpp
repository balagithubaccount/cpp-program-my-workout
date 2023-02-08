//Write a Cpp program to copy one string to another string.

#include <iostream>
using namespace std;

int main()
{
    string str1,str2;
   
    cout << "Input the string: ";
    getline(cin, str1);
    str2 = str1;

    cout << "The First String is: " << str1 << endl;
    cout << "The Copied String is: " << str2 << endl;

    return 0;
}

/*
Sample Output:

Input the string: This is a string to be copied.
The First String is: This is a string to be copied.
The Copied String is: This is a string to be copied.

*/