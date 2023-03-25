// Write a program in Cpp to count the number of vowels and consonants in a string using a pointer.

#include <iostream>
using namespace std;

int cnt_vowel(char *ch)
{
    int count;
    for (count = 0; *ch != '\0'; ch++)
    {
        if (*ch == 'a' || *ch == 'e' || *ch == 'i' || *ch == 'o' || *ch == 'u' || *ch == 'A' || *ch == 'E' || *ch == 'I' || *ch == 'O' || *ch == 'U')
            count++;
    }

    return count;
}
int cnt_consonant(char *ch)
{
    int count;
    for (count = 0; *ch != '\0'; ch++)
    {
        if (((*ch >= 65 && *ch <= 90) || (*ch >= 97 && *ch <= 122)) && (*ch != 'a' && *ch != 'e' && *ch != 'i' && *ch != 'o' && *ch != 'u' && *ch != 'A' && *ch != 'E' && *ch != 'I' && *ch != 'O' && *ch != 'U'))
            count++;
    }

    return count;
}
int main()
{
    string str;
    cout << "Input a string: ";
    getline(cin, str);

    cout << "\nNumber of Vowels: " << cnt_vowel(&str[0]) << endl;
    cout << "\nNumber of Consonants: " << cnt_consonant(&str[0]) << endl;

    return 0;
}


/*
Sample Output: 

Input a string: string

Number of Vowels: 1

Number of Consonants: 5
*/