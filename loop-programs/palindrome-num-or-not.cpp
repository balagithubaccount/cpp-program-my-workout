// Write a Cpp program to check whether a number is a palindrome or not.

#include <iostream>
using namespace std;

int main()
{
    int num, x, r, sum = 0;
    cout << "Input the number: ";
    cin >> num;
    for (x = num; num != 0; num = num / 10)
    {
        r = num % 10;
        sum = sum * 10 + r;
    }
    if (sum == x)
    {
        cout << x << " is a palindrome number.\n";
    }
    else
    {
        cout << x << " is not a palindrome number.\n";
    }
    return 0;
}

/*
Sample Output:

Input the number: 12321
12321 is a palindrome number.

*/