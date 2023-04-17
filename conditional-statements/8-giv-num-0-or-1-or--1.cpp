// Wrrite a Cpp program to find the value of n is 0(zero) or 1(positive) or -1(negative).

#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "Input the integer value: ";
    cin >> m;

    if (m > 0)
    {
        cout << "The value of " << m << " is positive\n";
    }
    else if (m == 0)
    {
        cout << "The value of " << m << " is zero\n";
    }
    else
    {
        cout << "The value of " << m << " is negative\n";
    }
    return 0;
}

/*
Sample Output:

Input the integer value: -7
The value of -7 is negative

*/