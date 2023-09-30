// Write a Cpp program to find maximum size square sub-matrix with all 1's.

#include <iostream>
using namespace std;

int main()
{
  int row, col, subrow, subcol, indexrow, indexcol, temprow, tempcol, count, i, j, k = 0, l = 0;
  cout << "Enter the row size: ";
  cin >> row;
  cout << "Enter the column size: ";
  cin >> col;
  int mat[row][col], submat[row][col];
  indexrow = indexcol = 0;
  cout << "Enter the " << row * col << " elements for " << row << " x " << col << " matrix: \n";
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      cin >> mat[i][j];
    }
  }
  cout << "\nThe given array in matrix form is: \n";
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      cout << mat[i][j] << "\t";
    }
    cout << "\n";
  }
  subrow = (row > col) ? col : row;
  temprow = tempcol = subrow;
  subrow--;
  subcol = subrow;

start:
  count = 0;
  for (i = indexrow; i <= subrow; i++)
  {
    for (j = indexcol; j <= subcol; j++)
    {
      if (mat[i][j] == 1)
      {
        count++;
      }
    }
  }
  // cout << "\ncount=%d\n",count);

  if (count == (temprow) * (tempcol))
  {
    goto copy;
  }

  if ((subrow + 1) < row)
  {
    subrow++;
    indexrow++;
    goto start;
  }
  else
  {
    subrow = subrow - indexrow;
    indexrow = 0;
    if ((subcol + 1) < col)
    {
      subcol++;
      indexcol++;
      goto start;
    }
    else
    {
      subcol = subcol - indexcol;
      indexcol = 0;
      subrow--;
      subcol--;
      temprow--;
      tempcol--;
      goto start;
    }
  }
copy:
  for (i = indexrow; i <= subrow; i++, k++)
  {
    l = 0;
    for (j = indexcol; j <= subcol; j++, l++)
    {
      submat[k][l] = mat[i][j];
    }
  }

  cout << "\nThe maximum size sub-matrix is: \n";
  for (i = 0; i < temprow; i++)
  {
    for (j = 0; j < tempcol; j++)
    {
      cout << submat[i][j] << "\t";
    }
    cout << "\n";
  }
  return 0;
}

/*
Sample Output:

Enter the row size: 6
Enter the column size: 5
Enter the 30 elements for 6 x 5 matrix:
0 1 0 1 1
1 1 1 1 0
1 1 1 1 0
1 1 1 1 0
1 1 1 1 0
1 1 1 1 1

The given array in matrix form is:
0       1       0       1       1
1       1       1       1       0
1       1       1       1       0
1       1       1       1       0
1       1       1       1       0
1       1       1       1       1

The maximum size sub-matrix is:
1       1       1       1
1       1       1       1
1       1       1       1
1       1       1       1
*/
