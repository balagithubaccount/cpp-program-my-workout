// Write a Cpp program to convert a binary number to octal.

#include <iostream>
using namespace std;

int main()
{
    long int num, term, r, rem, place, oct, list, sum;
    cout << "Input the Binary Number: ";
    cin >> num;
    list = 1, sum = 0;

    for (term = num; num != 0; num = num / 1000)
    {
        oct = 0, place = 1;
        r = num % 1000;
        for (term = r; r != 0; r = r / 10)
        {
            rem = r % 10;
            oct = oct + (rem * place);
            place = place * 2;
        }
        sum = sum + (oct * list);
        list *= 10;
    }
    cout << "The octal number is: " << sum << endl;
    return 0;
}
/*
Sample Output:

Input the Binary Number: 10110110
The octal number is: 266

*/