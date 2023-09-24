// Write a Cpp program to count all possible paths from top left to bottom right of a mxn matrix...

#include <iostream>
using namespace std;

int main()
{
  int row, col, i, j;
  cout << "Enter the row size of the matrix: ";
  cin >> row;
  cout << "Enter the column size of the matrix: ";
  cin >> col;
  int matarr[row][col];
  for (i = 0; i < row; i++)
  {
    matarr[i][0] = 1;
  }
  for (i = 0; i < col; i++)
  {
    matarr[0][i] = 1;
  }
  for (i = 1; i < row; i++)
  {
    for (j = 1; j < col; j++)
    {
      matarr[i][j] = matarr[i - 1][j] + matarr[i][j - 1];
    }
  }

  cout << "\nThe size of the matrix is: " << row << " x " << col << endl;
  cout << "The all possible paths from top left to bottom right is: " << matarr[row - 1][col - 1] << endl;
  return 0;
}

/*
Sample Output:

Enter the row size of the matrix: 3
Enter the column size of the matrix: 4

The size of the matrix is: 3 x 4
The all possible paths from top left to bottom right is: 10
*/