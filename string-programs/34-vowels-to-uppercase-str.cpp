//Write a C programming to convert vowels into upper case character in a given string. 

#include <iostream>
using namespace std;

void vowel_to_uppercase(char* ptr)
{
    while(*ptr != '\0')
    {
        if(*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
        {
            *ptr-=' ';
        }
        ptr++;
    }
} 
int main()
{
    string str;
    cout << "Input a String: ";
    getline(cin, str);

    cout << "\nThe Original string is:\n"  << str << endl;
    vowel_to_uppercase(&str[0]);
    cout << "\nAfter converting vowels into uppercase the string becomes: \n" << str << endl;

    return  0;
}

/*
Sample Output:

Input a String: Aerious

The Original string is:
Aerious

After converting vowels into uppercase the string becomes: 
AErIOUs

*/