// 1. alphabet or not

#include <iostream>
using namespace std;

int main()
{
    char character;
    cout << "Enter the any one character: ";
    cin >> character;

    if ((character >= 65 && character <= 90) || (character >= 97 && character <= 122))
    {
        cout << "\nYou entered character '" << character << "'  is alphabet.\n";
    }

    else
    {
        cout << "\nYou entered character '" << character << "' is 'not' alphabet.\n";
    }

    return 0;
}