// Write a Cpp program to read any digit, display in the word.

#include <iostream>
using namespace std;

int main()
{
    int digit;
    cout << "Input a digit(0 to 9): ";
    scanf("%d", &digit);
    switch (digit)
    {
    case 0:
        cout << "Entered digit is ZERO (" << digit << ")\n";
        break;

    case 1:
        cout << "Entered digit is ONE (" << digit << ")\n";
        break;

    case 2:
        cout << "Entered digit is TWO (" << digit << ")\n";
        break;

    case 3:
        cout << "Entered digit is THREE (" << digit << ")\n";
        break;

    case 4:
        cout << "Entered digit is FOUR (" << digit << ")\n";
        break;

    case 5:
        cout << "Entered digit is FIVE (" << digit << ")\n";
        break;

    case 6:
        cout << "Entered digit is SIX (" << digit << ")\n";
        break;

    case 7:
        cout << "Entered digit is SEVEN (" << digit << ")\n";
        break;

    case 8:
        cout << "Entered digit is EIGHT (" << digit << ")\n";
        break;

    case 9:
        cout << "Entered digit is NINE (" << digit << ")\n";
        break;

    default:
        cout << "Entered digit is wrong.\n";
    }
    return 0;
}
/*

Output:

Input a digit(0 to 9): 8
Entered digit is EIGHT (8)

*/