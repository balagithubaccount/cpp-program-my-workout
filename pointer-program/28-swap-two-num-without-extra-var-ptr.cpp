// Write a Cpp program to swap two numbers without using a third variable.

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    int *X, *Y;
    X = &x, Y = &y;

    cout << "Input the value 'x': ";
    cin >> *X;

    cout << "Input the value 'y': ";
    cin >> *Y;

    cout << "\nBefore Swap x = " << *X << ", y = " << *Y << endl;

    *Y = *Y + *X;
    *X = *Y - *X;
    *Y = *Y - *X;

    cout << "After Swap x = " << *X << ", y = " << *Y << endl;

    return 0;
}

/*
Sample Output:

Input the value 'x': -9
Input the value 'y': 22

Before Swap x = -9, y = 22
After Swap x = 22, y = -9

*/