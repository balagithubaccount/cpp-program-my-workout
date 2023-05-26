// Write a Cpp program to convert an octal number into binary.

#include <iostream>
using namespace std;

int main()
{
    long int num, term, r, rem, bin, place, sum, list;
    cout << "Input an octal number: ";
    cin >> num;
    sum = 0, list = 1;
    for (term = num; num != 0; num = num / 10)
    {
        r = num % 10, place = 1, bin = 0;
        for (term = r; r != 0; r = r / 2)
        {
            rem = r % 2;
            bin = bin + (rem * place);
            place = place * 10;
        }
        sum = sum + (bin * list);
        list *= 1000;
    }
    cout << "The Binary number is: " << sum << endl;
}

/*
Sample Output:

Input an octal number: 5
The Binary number is: 101

*/