// Write a Cpp programot print n terms of odd natural number and their sum.
#include <iostream>
using namespace std; 

int main()
{
    int a, c = 0, n, sum = 0; 
    cout << "Input number of terms:";
    cin >> n;

    for (a = 1; a > 0; a++)
    {
        if (a % 2 != 0)
        {
            sum = sum + a;
            c++;
            cout << a << endl;
        }
        if (c == n)
        {
            break;
        }
    }
    cout << "Sum of " << n << " odd natural number is : " << sum << endl;
    return 0;
}

/*
Output:

Input number of terms:6
1
3
5
7
9
11
Sum of 6 odd natural number is : 36
*/