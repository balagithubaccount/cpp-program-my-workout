// Write a Cpp program to check whether a given character is uppercase or lowercase

#include <iostream>
using namespace std;

int main()
{
    char x;
    cout << "Enter any one character: ";
    cin >> x;

    (x >= 65 && x <= 90) ? cout << "Entered character '" << x << "' is Uppercase alphabet.\n" : (x >= 97 && x <= 122) ? cout << "Entered character '" << x << "' is Lowercase alphabet.\n":cout << "Entered character '" << x << "' is not alphabet\n";
                                                                                                                      
    return 0;
}

/*
Output 1: 

Enter any one character: r
Entered character 'r' is Lowercase alphabet.

Output 2:

Enter any one character: R
Entered character 'R' is Uppercase alphabet.

Output 3:

Enter any one character: 6
Entered character '6' is not alphabet

*/