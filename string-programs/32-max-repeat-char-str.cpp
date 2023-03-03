// Write a Cpp programming to find the maximum repeated character in a given string.

#include <iostream>
using namespace std;

int repeated_char(string str)
{
    int count, max = 0;
    char var;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count = 0;
        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str[i] == str[j] && str[j] != ' ')
            {
                count++;
            }
        }
        if (max < count)
        {
            max = count;
            var = str[i];
        }
    }
    cout << "The Maximum repetitive character in \"" << str << "\" is: " << var << endl;

    return max;
}
int main()
{
    string str;
    cout << "Input a string: ";
    getline(cin, str);
    int n = repeated_char(str);
    cout << "Count is: " << n << endl;

    return 0;
}

/*
Sample Output:

Input a string: Java Concept Of The Day
The Maximum repetitive character in "Java Concept Of The Day" is: a
Count is: 3

*/