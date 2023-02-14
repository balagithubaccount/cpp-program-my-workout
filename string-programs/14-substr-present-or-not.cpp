// Write a Cpp program to check whether a given substring is present in the given string.
#include <iostream>
#include <string>
using namespace std;

int check_string_present(string str, string substr, int strl, int substrl)
{
    cout << "Given String is: " << str << endl;
    cout << "Given Substring is: "<< substr << endl;

    int i = 0, j, k, count;
    for (j = 0; j < strl; j++)
    {
        if (substr[i] == str[j])
        {
            count = 0;
            for (k = i; k < substrl; k++)
            {
                if (substr[k] == str[j + count])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if (count == substrl)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    string str, substr;
    cout << "Input the string: ";

    getline(cin, str);
    cout << "Input the substring to be search: ";
    getline(cin, substr);

    if (check_string_present(&str[0], &substr[0], str.length(), substr.length()) == 1)
    {
        cout << "The Substring is exists in the string.\n";
    }
    else
    {
        cout << "The substring is not exists in the string.\n";
    }

    return 0;
}
/*
Sample Output:

Input the string: FACEPrep
Input the substring to be search: Prep
Given String is: FACEPrep
Given Substring is: Prep
The Substring is exists in the string.
*/