// Write a Cpp program Determine whether it is a sparse matrix or not.

#include <iostream>
using namespace std;

int main()
{
  int row, col, i, j, zero = 0, con;
  cout << "Enter the number of row of the matrix: ";
  cin >> row;
  cout << "Enter the number of column of the matrix: ";
  cin >> col;
  con = row * col;
  int matrix[row][col];
  cout << "Enter " << con << " Elements of the matrix:\n";
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      cout << "Element-[" << i << "][" << j << "]: ";
      cin >> matrix[i][j];
      if (matrix[i][j] == 0)
        zero++;
    }
  }
  cout << "Given matrix is:\n";
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      cout << matrix[i][j] << "\t";
    }
    cout << "\n";
  }
  if (zero > con / 2)
    cout << "The given matrix is sparse matrix.\n";
  else
    cout << "The given matrix is not a sparse matrix.\n";
  cout << "There are " << zero << " number of zeros in the matrix.\n";
}

/*

Output:

Enter the number of row of the matrix: 3
Enter the number of column of the matrix: 3
Enter 9 Elements of the matrix:
Element-[0][0]: 1
Element-[0][1]: 0
Element-[0][2]: 2
Element-[1][0]: 0
Element-[1][1]: 6
Element-[1][2]: 0
Element-[2][0]: 0
Element-[2][1]: 0
Element-[2][2]: 0
Given matrix is:
1       0       2
0       6       0
0       0       0
The given matrix is sparse matrix.
There are 6 number of zeros in the matrix.

*/
