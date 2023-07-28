// To check whether a given matrix is an identity matrix or not.

#include <iostream>
using namespace std;

int main()
{
  int row, col, i, j, con1 = 0, con2 = 0;
  cout << "Enter the row and column of the square matrix: ";
  cin >> row >> col;
  int mat[row][col];
  cout << "Enter the Elements of the matrix.\n";
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      cout << "Element-[" << i << "][" << j << "]: ";
      cin >> mat[i][j];
    }
  }
  cout << "The Given matrix is:\n";
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      cout << mat[i][j] << "\t";
    }
    cout << "\n";
  }
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      if (i == j && mat[i][j] == 1)
        con1++;
      else if (mat[i][j] == 0)
        con2++;
      else
        break;
    }
  }
  if (con1 == row && con2 == (row * col) - col)
    cout << "The matrix is an identity matrix.\n";
  else
    cout << "The matrix is not an identity matrix.\n";
  return 0;
}

/*
Output:

Enter the row and column of the square matrix: 4 4
Enter the Elements of the matrix.
Element-[0][0]: 1
Element-[0][1]: 0
Element-[0][2]: 0
Element-[0][3]: 0
Element-[1][0]: 0
Element-[1][1]: 1
Element-[1][2]: 0
Element-[1][3]: 0
Element-[2][0]: 0
Element-[2][1]: 0
Element-[2][2]: 1
Element-[2][3]: 0
Element-[3][0]: 0
Element-[3][1]: 0
Element-[3][2]: 0
Element-[3][3]: 1
The Given matrix is:
1       0       0       0
0       1       0       0
0       0       1       0
0       0       0       1
The matrix is an identity matrix.

*/
