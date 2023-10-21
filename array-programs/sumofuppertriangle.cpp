// Write a Cpp program to find the sum of upper triangular elements of a matrix...

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
  cout << "The Elements being summed of the upper triangular matrix are: ";
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      if (i != j && i < j)
      {
        sum = sum + mat[i][j];
        cout << mat[i][j] << " ";
      }
    }
  }
  cout << "\nThe sum of the upper triangular Matrix Elements are: " << sum << endl;
  return 0;
}

/*
Output:

Enter the row & column size of the square matrix: 3
Enter the 9 Elements for matrix:
1 2 3
4 5 6
7 8 9
The Given Matrix is:
1       2       3
4       5       6
7       8       9
The Elements being summed of the upper triangular matrix are: 2 3 6
The sum of the upper triangular Matrix Elements are: 11

*/
