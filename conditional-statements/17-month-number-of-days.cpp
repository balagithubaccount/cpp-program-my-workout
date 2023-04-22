// Write a Cpp to input month number and print number of days in that month.

#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "Enter the month: ";
    cin >> m;

    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        cout << "31 days for " << m << "th month.\n";
    }
    else if (m == 2)
    {
        cout << "28 days for 2nd month.\n";
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        cout << "30 days for " << m << "th month.\n", m;
    }
    else
    {
        cout << "Enter valid month.\n";
    }
    return 0;
}

/*
Sample Output:

Enter the month: 11
30 days for 11th month.

*/