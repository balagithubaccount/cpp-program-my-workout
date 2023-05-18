// n terms of even natural number and their sum

#include <iostream>
using namespace std;

int main()
{
    int a, n, c = 0, sum = 0;
    cout << "Enter the number: ";
    scanf("%d", &n);

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
    cout << "Sum of " << n << "even natural number is: " << sum << endl;

    return 0;
}

/*
Output:

Enter the number: 5
2
4
6
8
10
Sum of 5even natural number is: 30

*/