// Write a Cpp programming to reverse all the vowels present in a given string. 

#include <iostream>
#include <string>
using namespace std;

void vowel_reverse(string str, int cons)
{
    int i, j;
    char temp;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            for (int j = cons; j != i && j > i; j--)
            {
                if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u' || str[j] == 'A' || str[j] == 'E' || str[j] == 'I' || str[j] == 'O' || str[j] == 'U')
                {
                    temp = str[j];
                    str[j] = str[i];
                    str[i] = temp;
                    cons--;
                    break;
                }
                cons--;
            }
        }
    }
    cout << "After the process a string is: " << str << endl;
}
int main()
{
    string str;
    cout << "Input a string: ";
    getline(cin, str);
    vowel_reverse(str, str.length() - 1);

    return 0;
}

/*
Sample Output:1

Input a string: AEIou
After the process a string is: uoIEA

Sample Output:2

Input a string: Python
After the process a string is: Python


*/