// to find entered character is alphabet or digit or special character.

#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter any one character: ";
    cin >> c;

    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        cout << "Entered character '" << c << "' is alphabet.\n";
    }
    else if (c >= 48 && c <= 57)
    {
        cout << "Entered character '" << c << "' is digit.\n";
    }
    else
    {
        cout << "Entered character '" << c << "' special character.\n\n";
    }

    return 0;
}

/*
Sample Output:

Enter any one character: a
Entered character 'a' is alphabet.
*/