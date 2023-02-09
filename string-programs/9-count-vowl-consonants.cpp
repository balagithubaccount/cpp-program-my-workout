// Write a Cpp program to count total number of vowel and consonant in a string.

#include <iostream>
using namespace std;

int size = 100;
void count_vowel_consonant(string str)
{
    int vowel = 0, consonant = 0, temp;
    for (int i = 0; str[i] != '\0'; i++)
    {
        temp = 0;
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowel++;
            temp = 1;
        }
        if ((str[i] >= 'a' && str[i] <= 'z' && temp != 1) || (str[i] >= 'A' && str[i] <= 'Z' && temp != 1))
        {
            consonant++;
            temp = 0;
        }
    }
    cout << "The total number of Vowel in the String is: " << vowel << endl;
    cout << "The total number of Consonant in the String is: " << consonant << endl;
}
int main()
{
    string str;
    cout << "Input the String: ";
    getline(cin, str);

    count_vowel_consonant(str);
    return 0;
}

/*
Sample Output:

Input the String: this is a really simple sentence
The total number of Vowel in the String is: 10
The total number of Consonant in the String is: 17
*/