
// Write a cpp program to check whether a number is even or odd.

#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number: \n";
    cin >> x;
    cout << "x = " << x << endl;

    if (x % 2 == 0)
    {
        cout << "A given number " << x << " is even\n";
    }
    else
    {
        cout << "A given number " << x << " is odd.\n";
    }
    return 0;
}

/*
Sample Output:

Enter the number:
23
x = 23
A given number 23 is odd.

*/