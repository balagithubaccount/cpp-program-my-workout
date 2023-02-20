//Write a program in Cpp to find the largest and smallest word in a string.

#include <iostream>
#include <string>
using namespace std;

void min_word(string str,int len)
{
    int i,j,count,start_index=0,end_index=len-1,small=len;
    for(i=0; str[i]!='\0' && i<len; i++)
    {
        count=0;
        if(str[i]!=' ')
        {
            count++;
            while(str[i+count] != ' ' && str[i+count] != '\0')
            {
                count++;
            }
            if(small > count )
            {
                small = count;
                start_index = i;
                end_index = i+(count-1);
            }
            i = i+count;
        }
    }
    cout << "The smallest word is: '";
    for(i=start_index; i<=end_index; i++)
    {
        cout << str[i];
    }
    cout << "'\n";
}

void max_word(string str,int len)
{
    int i,j,count,start_index=0,end_index=len-1,big=0;
    for(i=0; str[i]!='\0'; i++)
    {
        count=0;
        if(str[i]!=' ')
        {
            count++;
            while(str[i+count] != ' ' && str[i+count] != '\0')
            {
                count++;
            }
            if(big < count)
            {
                big = count;
                start_index = i;
                end_index = i+(count-1);
            }
            i = i+count;
        }
    }
    cout << "The Largest word is: '";
    for(i=start_index; i<=end_index; i++)
    {
        cout << str[i];
    }
    cout << "'\n";
}
int main()
{
    string str;
    cout << "Input a String: ";
    getline(cin, str);
    
    min_word(str,str.length());
    max_word(str,str.length());

    return 0;
}

/*
Sample Output:

Input a String: It is a string with smallest and largest word.
The smallest word is: 'a'
The Largest word is: 'smallest'

*/