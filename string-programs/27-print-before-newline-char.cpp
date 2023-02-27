// Write a program in Cpp to print only the string before new line character. is print() will only print line one, because the newline character is not printable.

#include <iostream>
using namespace std;
char print_before_newline(char *ptr)
{
    while (*ptr != 10)
    {
        printf("%c", *ptr++);
    }
    return '\n';
}
int main()
{
    string str = "The quick brown fox \n jumps over the \n lazy dog.";

    cout << print_before_newline(&str[0]);

    return 0;
}

/*
Sample Output:
char string[]="The quick brown fox \n jumps over the \n lazy dog.";
The quick brown fox

*/