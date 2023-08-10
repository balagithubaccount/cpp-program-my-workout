// Write a Cpp program to print a matrix in spiral form.

#include <iostream>
using namespace std;

int main()
{
  int row, col, i, j, k = 0, temp = 0, size, odd;
  cout << "Enter the row size: ";
  cin >> row;
  cout << "Enter the column size: ";
  cin >> col;
  odd = col - 1;
  size = row * col;
  int mat[row][col], result[size];
  cout << "Enter the " << row * col << " values for " << row << "x" << col << " matrix:\n";
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      cin >> mat[i][j];
    }
  }
  cout << "\nThe Given Matrix is:\n";
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      cout << mat[i][j] << "\t";
    }
    cout << "\n";
  }
  cout << "Matrix in spiral form is: \n";
  i = j = 0;
START:
  if (temp == 0 || temp == 4)
  {
    for (; j < col && (k <= size - 1); j++)
    {
      temp = 1; // cout << "\ni=%d,j=%d\n",i,j);
      cout << mat[i][j] << ", ";
      result[k++] = mat[i][j];
    }
  }
  i++, j--;
  if (temp == 1)
  { // cout << "\ni=%d,j=%d\n",i,j);
    for (; i < row && (k <= size - 1); i++)
    {
      temp = 2; // cout << "\ni=%d,j=%d\n",i,j);
      cout << mat[i][j] << ", ";
      result[k++] = mat[i][j];
    }
  }
  i--, j--;
  if (temp == 2)
  { //  cout << "\ni=%d,j=%d\n",i,j);
    for (; j >= 0 && (k <= size - 1); j--)
    {
      temp = 3; //  cout << "\ni=%d,j=%d\n",i,j);
      cout << mat[i][j] << ", ";
      result[k++] = mat[i][j];
    }
  }
  i--, j++;
  if (temp == 3)
  { //  cout << "\ni=%d,j=%d\n",i,j);
    for (; i > j && (k <= size - 1); i--)
    {
      temp = 4; // cout << "\ni=%d,j=%d\n",i,j);
      cout << mat[i][j] << ", ";
      result[k++] = mat[i][j];
    }
  }
  i++, j = i, row--, col--;
  //  cout << "\ni=%d,j=%d\n",i,j);
  // cout << "\n\nrow=%d, col=%d\n\n",row,col);
  if (col >= 0 && row >= 0)
  {
    goto START;
  }
  // cout << "\nk=" << k << "\n";
}
/*
Output:

Enter the row size: 4
Enter the column size: 5
Enter the 20 values for 4x5 matrix:
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20

The Given Matrix is:
1       2       3       4       5
6       7       8       9       10
11      12      13      14      15
16      17      18      19      20
Matrix in spiral form is:
1, 2, 3, 4, 5, 10, 15, 20, 19, 18, 17, 16, 11, 6, 7, 8, 9, 14, 13, 12,

*/