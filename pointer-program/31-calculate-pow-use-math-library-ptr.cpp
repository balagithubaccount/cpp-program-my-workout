// Write a Cpp program to calculate the power using the POW method - Pointer.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int value, power, *ptr, *powr;
    ptr = &value, powr = &power;

    cout << "Input the value: ";
    cin >> *ptr;

    cout << "Input the power value: ";
    cin >> *powr;

    cout << "\nMathematical representation: " << value << "^" << power << endl;
    cout << "Base: " << *ptr << endl;
    cout << "Exponent: " << *powr << endl;

    cout << *ptr << "^" << *powr << " means " << *powr << " time multiplication of " << *ptr << endl;
    int result = pow(*ptr, *powr);

    cout << "\nSolution (" <<  *ptr << "^" << *powr << ") = " << result << endl;

    return 0;
}

/*
Sample Output:

Input the value: 4
Input the power value: 5

Mathematical representation: 4^5
Base: 4
Exponent: 5
4^5 means 5 time multiplication of 4

Solution (4^5) = 1024
*/