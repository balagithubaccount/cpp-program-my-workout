// Write a C program to find the sum of lower triangular elements of a matrix...

#include <iostream>
using namespace std;

int main()
{
  int row, col, i, j, sum = 0;
  cout << "Enter the row & column size of the square matrix: ";
  cin >> row;
  col = row;
  int mat[row][col];
  cout << "Enter the " << row * col << " Elements for matrix:\n";
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      cin >> mat[i][j];
    }
  }
  cout << "The Given Matrix is: \n";
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      cout << mat[i][j] << "\t";
    }
    cout << "\n";
  }
  cout << "The Elements being summed of the Lower triangular matrix are: ";
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      if (i != j && i > j)
      {
        sum = sum + mat[i][j];
        cout << mat[i][j] << " ";
      }
    }
  }
  cout << "\nThe sum of the Lower triangular Matrix Elements are: " << sum << endl;
}

/*
Output:

Enter the row & column size of the square matrix: 5
Enter the 25 Elements for matrix:
1 2 3 4 5
5 4 3 2 1
6 7 8 9 0
0 9 8 7 6
1 0 2 9 3
The Given Matrix is:
1       2       3       4       5
5       4       3       2       1
6       7       8       9       0
0       9       8       7       6
1       0       2       9       3
The Elements being summed of the Lower triangular matrix are: 5 6 7 0 9 8 1 0 2 9
The sum of the Lower triangular Matrix Elements are: 47

*/
