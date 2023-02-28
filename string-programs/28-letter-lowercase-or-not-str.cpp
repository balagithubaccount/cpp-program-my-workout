//Write a program in Cpp to check whether a letter is lowercase or not. 

#include <iostream>
using namespace std;

int lowercase_or_not(char letter)
{
    if(letter >= 'a' && letter <= 'z')
        return 1;
    else
        return 0;
}
int main()
{
    char letter;
    cout << "Input a character: ";

    cin >> letter;
    cout << "Given Character is:'" << letter << "'\n" ;

    if(lowercase_or_not(letter) > 0)
        cout << "The Entered letter is a lowercase letter.\n";

    else
        cout << "The Entered letter is not a lowercase letter.\n";

    return 0;
}

/*
Sample Output:

Input a character: Z
Given Character is:'Z'
The Entered letter is not a lowercase letter.

*/