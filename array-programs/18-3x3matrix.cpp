// write a Cpp program to print 3x3 matrix.....

#include <iostream>
using namespace std;

int main()
{
  int i, j, matrix[3][3];
  cout << "Enter the elements: \n";
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      cout << "Element [" << i << "][" << j << "]: ";
      cin >> matrix[i][j];
    }
  }
  cout << "The matrix is:\n";
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      cout << matrix[i][j] << "\t";
    }
    cout << "\n";
  }
}

/*
Sample Output:

Enter the elements:
Element [0][0]: 3
Element [0][1]: 5
Element [0][2]: 1
Element [1][0]: 6
Element [1][1]: 8
Element [1][2]: 4
Element [2][0]: 2
Element [2][1]: 1
Element [2][2]: 8
The matrix is:
3       5       1
6       8       4
2       1       8
*/
