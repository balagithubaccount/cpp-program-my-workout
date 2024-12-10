//Write a Cpp program to check whether a letter is uppercase or not. 

#include <iostream>
using namespace std;
int uppercase_or_not(char letter)
{
    if(letter >= 'A' && letter <= 'Z')
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
    char letter;
	
    cout << "Input a character: ";
    cin >> letter ;
    
    cout << "Given Character is:'" << letter <<"'\n";

    if(uppercase_or_not(letter) > 0)
    {
        cout << "The Entered letter is an UPPERCASE letter.\n";
    }
    else
    {
        cout << "The Entered letter is not an UPPERCASE letter.\n";
    }

    return 0;
}

/*
Sample Output:

Input a character: P
Given Character is:'P'
The Entered letter is an UPPERCASE letter.

*/