// Write a Cpp program to check whether a given number is an armstrong number or not.

#include <iostream>
using namespace std;

int main()
{
    int num, term, r, a, c, count = 0, sum = 0;
    cout << "Input the Number: ";
    cin >> num;

    for (term = num; num != 0; num = num / 10)
    {
        count++;
    }
    for (num = term; term != 0; term = term / 10)
    {
        r = term % 10;
        c = 1;
        for (a = 1; a <= count; a++)
        {
            c = c * r;
        }
        sum = sum + c;
    }
    if (sum == num)
        cout << "Your input number " << num << " is Armstrong.\n";
    else
        cout << "Your input number " << num << " is not a Armstrong number.\n";

    return 0;
}
/*
Sample Output:

Input the Number: 10
Your input number 10 is not a Armstrong number.

*/