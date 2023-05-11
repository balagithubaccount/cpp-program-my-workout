// Write a Cpp program to convert a binary number into a decimal number without using array, function and while loop.

#include <iostream>
using namespace std;

int main()
{
    long long int num, term, r, dec = 0, base = 1;
    cout << "Input the binary Number: ";
    cin >> num;
    cout << "Decimal number is: ";
    for (term = num; num != 0; num = num / 10)
    {
        r = num % 10;
        dec = dec + (r * base);
        base = base * 2;
    }
    cout << dec << endl;
    return 0;
}

/*
Sample Output:

Input the binary Number: 1010001
Decimal number is: 81

*/