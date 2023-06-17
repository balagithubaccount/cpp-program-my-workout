// Write a Cpp program to make such a pattern like right angle triangle with a number which will repeat a number in a row.

/*
the pattern like
input row is 5
1
22
333
4444
55555
*/

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Input the number of rows: ";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
    return 0;
}

/*
Sample Output:

Input the number of rows: 4
1
22
333
4444

*/