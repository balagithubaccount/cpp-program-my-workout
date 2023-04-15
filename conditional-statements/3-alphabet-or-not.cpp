// write a Cpp program to check whether entered character is alphabet or not.

#include <iostream>
using namespace std;

int main()
{
    char character;
    cout << "Enter the any one character: ";
    cin >> character;
    if (character >= 65 && character <= 90)
    {
        cout << "You entered character '" << character << "' is alphabet.\n";
    }
    else if (character >= 97 && character <= 122)
    {
        cout << "You entered character '" << character << "' is alphabet.\n";
    }
    else
    {
        cout << "You entered character '" << character << "' is not alphabet.\n";
    }
    return 0;
}
/*
Sample Output:

Enter the any one character: S
You entered character 'S' is alphabet.
*/