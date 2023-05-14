// Write a Cpp program to convert a decimal number into binary without using an array.

#include <iostream>
using namespace std;

int main()
{
    long long int num, term, r, bin = 0, place = 1, count = 0, space;
    cout << "Input the decimal number: ";
    cin >> num;
    cout << "Binary format for the given number " << num << " is: ";
    for (term = num; num != 0; num = num / 2)
    {
        r = num % 2;
        bin = bin + (r * place);
        place = place * 10;
    }
    cout << bin << endl;
    return 0;
} // count++;

/*
Sample Output:

Input the decimal number: 81
Binary format for the given numbern 81 is: 1010001

*/