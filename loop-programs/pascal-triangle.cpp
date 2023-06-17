// Write a Cpp program to display Pascal's triangle

#include <iostream>
using namespace std;

int main()
{
    int row, in, space, c = 1, i, j;
    cout << "Input the number of rows: ";
    cin >> row;
    space = row * 2;

    for (i = 0; i < row; i++)
    {
        for (in = 1; in <= space; in++)
        {
            cout << " ";
        }
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                c = 1;
            else
            {
                c = c * (i - j + 1) / j;
            }
            cout << c << "   ";
        }
        cout << "\n";
        space -= 2;
    }
    return 0;
}
/*
Sample output:

Input the number of rows: 5
          1
        1   1
      1   2   1
    1   3   3   1
  1   4   6   4   1

*/
