//Write a Cpp program to check whether a character is Hexadecimal Digit or not. 

#include <iostream>
using namespace std;
 
int hexa_or_not(char var)
{
    if((var >= 'a' && var <= 'f') || (var >= 'A' && var <= 'F') || (var >= '0' && var <= '9'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char var;
    
    cout << "Input a character: ";
    cin >> var;
    
    
    cout << "Giver Character is: " << var << endl;
    if(hexa_or_not(var) > 0)
    {
        cout << "The Entered character '" << var << "' is a hexadecimal digit.\n";
    }
    else
    {
        cout << "The Entered character '" << var << "' is not a hexadecimal digit.\n";
    }
}

/*
Sample Output:

Input a character: G
Giver Character is: G
The Entered character 'G' is not a hexadecimal digit.

*/