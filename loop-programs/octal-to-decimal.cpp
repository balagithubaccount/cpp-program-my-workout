// Write a Cpp program to convert an octal number to a decimal without using an array.

#include <iostream>
using namespace std;

int main()
{
    int num, term, dec, r, place;
    dec = 0;
    place = 1;
    cout << "Input the octal number (using 0-7): ";
    cin >> num;
    for (term = num; num != 0; num = num / 10)
    {
        r = num % 10;
        dec = dec + (r * place);
        place = place * 8;
    }
    cout << "The decimal number is: " << dec << endl;

    return 0;
}

/*
Sample Output:

Input the octal number (using 0-7): 234
The decimal number is: 156

*/
