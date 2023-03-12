
// Write a Cpp program to extract a substring from a given string.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, substr;
    cout << "Input the string: ";
    getline(cin, str);

    int start, len, strl, i = 0;
    cout << "Input the position to start extraction: ";
    cin >> start;

    cout << "Input the length of substring: ";
    cin >> len;

    strl = str.length();
    cout << "given string is: " << str << endl;

    if ((start - 1) + (len - 1) <= (strl - 1))           // changed strl - 2  to strl - 1
    {
        while (i < len)
        {
            substr[i] = str[start + i - 1];
            i++;
        } 
        substr[i] = '\0';

        cout << "Substring is: '" ;
        for(int j = 0; substr[j]!= '\0' ; j++)
          cout << substr[j];

        cout << "'\n";
    }
    else
    {
        cout << "Given substring length is does not exist.\n";
    }

    return 0;
}

/*
Sample Output:

Input the string: This is test String
Input the position to start extraction: 9
Input the length of substring: 4
given string is: This is test String
Substring is: 'test'
*/