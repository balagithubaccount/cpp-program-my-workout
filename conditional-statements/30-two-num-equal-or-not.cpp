// Write a C program to find Given two numbers equal or not

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Input a first number: ";
    cin >> n1;
    cout << "Input a second number: ";
    cin >> n2;

    (n1 == n2) ? cout << "\nGiven numbers are equal.\n" : cout << "Given numbers are not equal.\n";

    return 0;
}

/*
Sample Output:

Input a first number: 21
Input a second number: 12
Given numbers are not equal.

*/