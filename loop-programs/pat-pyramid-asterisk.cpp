// Write a Cpp program to make such a pattern like a pyramid wiht an asterisk.
/*
the pattern like:
input row is 4

   *
  * *
 * * *
* * * *

*/

#include <iostream>
using namespace std;

int main()
{
    int row, space;
    cout << "Input the number of rows: ";
    cin >> row;
    space = row - 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = space; j >= 1; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
        space--;
    }
    return 0;
}

/*
Sample Output:

Input the number of rows: 6
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 
* * * * * * 

*/