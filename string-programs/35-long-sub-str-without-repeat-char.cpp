//Write a Cpp programming to find the length of the longest substring of a given string without repeating character. 

#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Input a string: ";
    getline(cin, str);
    
    int i,j,k=0,len,large = 0;
     
    while(str[k]!='\0')
    {
        for(i=k; str[i] != '\0'; i++)
        {
            len=1;
            for(j=k; j<i; j++)
            {
                if(str[i]==str[j])
                {
                   goto end;
                }
                else
                {
                    len++;
                }
            }
            if(large < len)
            {
                large = len;
            }
        }
        end:
        k++;
    }
    cout << "Given String is: " << str << endl;
    cout << "Length of the longest substring without repeating characters: " << large << endl;

    return 0;
}

/*
Sample Output:

Input a string: xyzxyzyy
Given String is: xyzxyzyy
Length of the longest substring without repeating characters: 3

*/	