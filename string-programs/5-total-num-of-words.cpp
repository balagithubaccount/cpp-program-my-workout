// Write a Cpp program to count the total number of words in a string.

#include <iostream>
using namespace std;

int main()
{
    string str;
    int i, words = 0;

    cout << "Input the string: ";
    getline(cin, str);
    
    cout << "Given string: " << str << endl ;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 32)  // 32 is the ASCII value of the 'space'
        {
            words++;
        }
    }
    if (str[i] == '\0' && str[i - 1] != 32)
    {
        words++;
    }
    cout << "Total number of words in the string is: " << words << endl;

    return 0;
}

/*
Sample Output:

Input the string: This is test string.
Given string: This is test string.
Total number of words in the string is: 4
*/