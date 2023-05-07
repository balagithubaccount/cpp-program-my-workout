// Write a Cpp program to get the week number to print week day.

#include <iostream>
using namespace std;

int main()
{
    int w;

    cout << "Enter the week number: ";
    cin >> w;

    switch (w)
    {

    case 1:
        cout << "1-Monday\n";
        break;

    case 2:
        cout << "2-Tuesday\n";
        break;

    case 3:
        cout << "3-Wednesday\n";
        break;

    case 4:
        cout << "4-Thursday\n";
        break;

    case 5:
        cout << "5-Friday\n";
        break;

    case 6:
        cout << "6-Saturday\n";
        break;

    case 7:
        cout << "7-Sunday\n";
        break;

    default:
        cout << "Enter the valid week number...\n";
    }
    return 0;
}

/*
Sample Output:

Enter the week number: 7
7-Sunday

*/