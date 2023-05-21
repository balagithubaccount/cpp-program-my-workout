// Write a Cpp program to print floyd's triangle pattern.

#include <iostream>
using namespace std;

int main()
{
    int n, i, j, p, q;
    cout << "Input the number of rows: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            p = 1;
            q = 0;
        }
        else
        {
            p = 0;
            q = 1;
        }

        for (j = 1; j <= i; j++)
        {
            if (j % 2 != 0)
            {
                cout << p;
            }
            else
            {
                cout << q;
            }
        }
        cout << endl;
    }
    return 0;
}

/*

Sample output:

Input the number of rows: 7
1
01
101
0101
10101
010101
1010101

*/