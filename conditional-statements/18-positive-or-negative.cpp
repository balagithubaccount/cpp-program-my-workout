// Write a Cpp program to check whether a number is negative, positive or zero

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter the number: \n";
    cin >> x;
    cout << "x = " << x << endl;
    if (x > 0)
    {
        cout << "A given number is positive\n";
    }
    else if (x < 0)
    {
        cout << "A given number is negative\n";
    }
    else
    {
        cout << "A given number is neither positive and nor negative.\n";
    }

    return 0;
}

/*
Sample Output:

Enter the number:
0
x = 0
A given number is neither positive and nor negative.

*/