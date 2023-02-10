//Write a Cpp program to find maximum occurring character in a string.

#include <iostream>
using namespace std;

int max_occur_char_str(string str)
{
    int i,j,count,Max=0;
    char Max_char;

    for(i=0; str[i]!='\0'; i++)
    {
        count=0;
        for(j=0; str[j]!='\0'; j++)
        {
            if(str[i]==str[j] && str[i]!=' ')
            {
                count++;
            }
        }
        if(Max<count)
        {
            Max=count;
            Max_char=str[i];
        }
    }
    cout << "The Highest Frequency of character: " << Max_char << endl;

    return Max;
}
int main()
{
    string str;
    int Max;
    cout << "Input the String: " ;
    getline(cin, str);
    Max=max_occur_char_str(str);
    cout << "nAppears number of times: " << Max << endl;

    return 0;
}

/*
Sample Output:

Input the string: sample string for highest frequency of character.    
The Highest Frequency of character: e
Appears number of times: 5
*/