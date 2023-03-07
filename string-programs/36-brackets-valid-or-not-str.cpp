//A given string contains the bracket characters '(', ')', '{', '}', '<', ‘>', '[' and ']', Write a Cpp programme to check the said string is valid or not. The input string will be valid when open brackets and closed brackets are same type of brackets.

#include <iostream>
#include <stdbool.h>
using namespace std;

bool bracket_valid_not(char* ptr)
{
    int i=0, x=0,y=0,z=0,w=0;
    int arr[100];
    while(*ptr != '\0')
    {
        if(*ptr == '(')       //  1.x
        {
            x++;
            arr[++i]=1;   
        }
        if(*ptr == '{')       // 2.y
        {
            y++;
            arr[++i]=2;
        }
        if(*ptr == '[')       // 3.z
        {
            z++; 
            arr[++i]=3;
        }
        if(*ptr == '<')       // 4.w
        {
            w++;
            arr[++i]=4;
        }
        if(*ptr == ')')
        {
            if(arr[i] == 1)
            {
               x--;
               i--;
            }
            else{
                return false;
            }
        }
        if(*ptr == '}')
        {
            if(arr[i] == 2)
            {
                y--;
                i--;
            }
            else{
                return false;
            }
        }
        if(*ptr == ']')
        {
            if(arr[i] == 3)
            {
               z--;
               i--;
            }
            else{
                return false;
            }
        }
        if(*ptr == '>')
        {
            if(arr[i] == 4)
            {
               w--;
               i--;
            }
            else{
                return false;
            } 
        }
        ptr++;
    }
    //return true;
   // if( x>0 || y>0 || z>0 || w>0)
  // printf("i = %d\n",i);
   if(i>0)
    {
       return false;
    }
    else{
       return true;
    }
}
int main()
{
    string str;
    cout << "Input a String: ";
    getline(cin, str);
    if(bracket_valid_not(&str[0])==1)
    {
        cout << "Bracket in the string is valid.\n";
    }
    else
    {
        cout << "Bracket in the string is invalid.\n";
    }
}
/*
Output:1

Input a String: {[[]{}]}()()
Bracket in the string is valid.

Output:2
{[[]{}]}()()
Input a String: (({)})
Bracket in the string is invalid.

Output:3

Input a String: <>(){}[]
Bracket in the string is valid.

Output:4

Input a String: )([{}])
Bracket in the string is invalid.
*/