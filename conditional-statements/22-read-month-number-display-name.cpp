//Write a Cpp program to read any month number in integer and display month name in the word.

#include <iostream>
using namespace std;

int main()
{
    int month;
    cout << "Enter a Month Number (1 to 12): ";
    cin >> month;
    switch (month)
    {
        case 1:
        cout << "Entered month is: " << month <<" - JANUARY";
        break;

        case 2:
        cout << "Entered month is: " << month <<" - FEBRUARY",month;
        break;

        case 3:
        cout << "Entered month is: " << month <<" - MARCH",month;
        break;

        case 4:
        cout << "Entered month is: " << month <<" - APRIL",month;
        break;

        case 5:
        cout << "Entered month is: " << month <<" - MAY",month;
        break;

        case 6:
        cout << "Entered month is: " << month <<" - JUNE",month;
        break;

        case 7:
        cout << "Entered month is: " << month <<" - JULY",month;
        break;

        case 8:
        cout << "Entered month is: " << month <<" - AUGUST",month;
        break;

        case 9:
        cout << "Entered month is: " << month <<" - SEPTEMBER",month;
        break;

        case 10:
        cout << "Entered month is: " << month <<" - OCTOBER",month;
        break;

        case 11:
        cout << "Entered month is: " << month <<" - NOVEMBER",month;
        break;

        case 12:
        cout << "Entered month is: " << month <<" - DECEMBER",month;
        break;

        default :
        cout << "Entered month number is invalid.\n";
    }
    cout << "\n";
    return 0;
}

/*
Sample Output:

Enter a Month Number (1 to 12): 3
Entered month is: 3 - MARCH

*/