// Write a Cpp program to print n terms of even natural number and their sum.

#include <iostream>
using namespace std;

int main()
{
    int a, n, c = 0, sum = 0;
    cout << "Enter the number of terms: ";
    cin >> n;

    for (a = 1; a > 0; a++)
    {
        if (a % 2 == 0)
        {
            cout << a << endl;
            c++;
            sum = sum + a;
            if (c == n)
            {
                break;
            }
        }
    }
    cout << "Sum of " << n << " even natural number is: " << sum << endl;

    return 0;
}

/*
Sample Output:

Enter the number of terms: 7
2
4
6
8
10
12
14
Sum of 7 even natural number is: 56

*/
