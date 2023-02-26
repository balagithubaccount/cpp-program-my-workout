// Write a Cpp program to count the number of punctuation characters exists in a string.

#include <iostream>
using namespace std;

int count_punctuation(char *ptr)
{
    int count = 0;
    for (int i = 0; *ptr != '\0'; ptr++)
    {
        if (*ptr != 32 || *ptr != ' ')
        {
            if ((*ptr >= 0 && *ptr <= 47) || (*ptr >= 58 && *ptr <= 64) || (*ptr >= 91 && *ptr <= 96) || (*ptr >= 123 && *ptr <= 127))
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    string str;
    cout << "Input a string: \n";
    getline(cin, str);

    cout << "\nThe Given string is: \n" << str << endl;

    cout << "\nThe punctuation characters exists in the string is: ";
    cout << count_punctuation(&str[0]) << endl;

    return 0;
}

/*
Sample Output:

Input a string: 
 'It was a tiring day, so tiring he fell asleep on the train and missed his stop. '         

The Given string is: 
 'It was a tiring day, so tiring he fell asleep on the train and missed his stop. '

The punctuation characters exists in the string is: 4

*/
