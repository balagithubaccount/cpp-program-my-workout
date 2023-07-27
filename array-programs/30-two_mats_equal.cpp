// Write a Cpp program To accept two matrices and check whether they are equal.

#include <iostream>
using namespace std;

int main()
{
  int row1, col1, row2, col2, i, j, result;
  cout << "Enter the row and column of the matrix 1: ";
  cin >> row1 >> col1;
  cout << "Enter the row and column of the matrix 2: ";
  cin >> row2 >> col2;
  int mat1[row1][col1], mat2[row2][col2];
  cout << "Enter the " << row1 * col1 << " elements of the matrix 1:\n";
  for (i = 0; i < row1; i++)
  {
    for (j = 0; j < col1; j++)
    {
      cout << "Element-[" << i << "][" << j << "]: ";
      cin >> mat1[i][j];
    }
  }
  cout << "Enter the " << row2 * col2 << " elements of the matrix 2:\n";
  for (i = 0; i < row2; i++)
  {
    for (j = 0; j < col2; j++)
    {
      cout << "Element-[" << i << "][" << j << "]: ";
      cin >> mat2[i][j];
    }
  }
  cout << "Given matrix 1:\n";
  for (i = 0; i < row1; i++)
  {
    for (j = 0; j < col1; j++)
    {
      cout << mat1[i][j] << "\t";
    }
    cout << "\n";
  }
  cout << "Given matrix 2:\n";
  for (i = 0; i < row2; i++)
  {
    for (j = 0; j < col2; j++)
    {
      cout << mat2[i][j] << "\t";
    }
    cout << "\n";
  }
  for (i = 0; i < row1; i++)
  {
    for (j = 0; j < col1; j++)
    {
      if (mat1[i][j] == mat2[i][j])
        result = 1;
      else
      {
        result = 0;
        break;
      }
    }
  }
  if ((row1 == row2) && (col1 == col2))
    cout << "The Matrices can be compared:\n";
  else
    cout << "The Matrices can not be compared:\n";
  if (result == 1)
    cout << "Two matrices are equal.\n";
  else
    cout << "Two matrices are not equal.\n";
}

/*
Output:

Enter the 4 elements of the matrix 1:
Element-[0][0]: 1
Element-[0][1]: 2
Element-[1][0]: 3
Element-[1][1]: 4
Enter the 4 elements of the matrix 2:
Element-[0][0]: 1
Element-[0][1]: 2
Element-[1][0]: 3
Element-[1][1]: 4
Given matrix 1:
1       2
3       4
Given matrix 2:
1       2
3       4
The Matrices can be compared:
Two matrices are equal.

*/
