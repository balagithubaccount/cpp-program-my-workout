//Write a program in Cpp to Concatenate Two Strings Manually.

#include <iostream>
using namespace std;

char* string_concat(char* ptr1, char* ptr2)
{
    char* s = ptr1;
    while(*ptr1 != '\0')
    {
        ptr1++;
    }
    *ptr1 = ' ';
     ptr1++;
    while(*ptr2 != '\0')
    {
        *ptr1 = *ptr2;
         ptr2++;
         ptr1++;
    }
    *ptr1 = '\0';
    return s;
}
int main()
{
    string str1, str2;
    int a=0;

    cout << "Input the String 1: " ;
    getline(cin, str1);

   

    cout << "Input the String 2: " ;
    getline(cin, str2);

    cout << "Given string 1 is: " << str1 << endl;
    cout << "Given string 2 is: " << str2 << endl;

 
    char *s = string_concat(&str1[0],&str2[0]);
    cout << "After Concatenation the string is: " << s << endl;

    return 0;
}

/*
Sample Output:

Input the String 1: This is string one,
Input the String 2: This is string two.
Given string 1 is: This is string one,
Given string 2 is: This is string two.
After Concatenation the string is: This is string one, This is string two.

*/