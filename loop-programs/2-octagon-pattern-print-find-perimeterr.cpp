// Write a Cpp program to print octagon and find the perimeter.

#include <iostream>
using namespace std;

int main()
{
    int row;
    int space;
    int i, j, k = 0;

    cout << "Input the row value: ";
    cin >> row;
    cout << endl;

    space = row - 1;
    for (i = 0; i < row; i++)
    {
        for (j = space; j >= 1; j--)
        {
            cout << "  ";
        }
        for (j = 0; j < row + k; j++)
        {
            cout << "* ";
        }
        cout << endl;
        k += 2;
        space--;
    }
    for (i = 1; i < row; i++)
    {
        for (j = 1; j <= row + (k - 2); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (i = 1; i < row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= row + (k - 4); j++)
        {
            cout << "* ";
        }
        cout << endl;
        k -= 2;
    }

    cout << "\nPerimeter of an octagon is: (8 * a): 8 x " << row << " = " << row * 8 << endl;

    return 0;
}

/*
Sample Output:

Input the row value: 6

          * * * * * *
        * * * * * * * *
      * * * * * * * * * *
    * * * * * * * * * * * *
  * * * * * * * * * * * * * *
* * * * * * * * * * * * * * * *
* * * * * * * * * * * * * * * *
* * * * * * * * * * * * * * * *
* * * * * * * * * * * * * * * *
* * * * * * * * * * * * * * * *
* * * * * * * * * * * * * * * *
  * * * * * * * * * * * * * *
    * * * * * * * * * * * *
      * * * * * * * * * *
        * * * * * * * *
          * * * * * *

Perimeter of an octagon is: (8 * a): 8 x 6 = 48
*/