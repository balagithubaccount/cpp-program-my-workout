// Write a Cpp program To display the pattern like right angle triangle using an asterisk.
/*
pattern like
input 4

*
**
***
****

*/

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Input number of rows: ";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

/*
Sample Output:

Input number of rows: 5
*
**
***
****
*****

*/