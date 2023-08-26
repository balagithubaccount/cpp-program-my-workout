// Write a Cpp program to return only the unique rows from a given binary matrix.

#include <iostream>
using namespace std;

int main()
{
  int row, col, i, j, k, l, temp, count = 0, run;
  cout << "Enter the row size: ";
  cin >> row;
  cout << "Enter the column size: ";
  cin >> col;
  int matarr[row][col], check[row][col];
  cout << "Enter the " << row * col << " binary elements: \n";
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      cin >> matarr[i][j];
      if (i == 0)
      {
        check[i][j] = matarr[i][j];
        count = 1;
      }
    }
  }
  cout << "The given matrix is: \n";
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      cout << matarr[i][j] << "\t";
    }
    cout << "\n";
  }
  for (i = 1; i < row; i++)
  {
    run = count;
    for (j = 0; j < run; j++)
    {
      temp = 0;
      for (k = 0; k < col; k++)
      {
        if (matarr[i][k] == check[j][k])
        {
          temp++;
        }
      }

      if (temp != col)
      {
        for (k = count, l = 0; l < col; l++)
        {
          check[k][l] = matarr[i][l];
        }
        count++;
        break;
      }
      else
      {
        break;
      }
    }
  }
  cout << "\nThe Unique rows of the given array are: \n";
  for (i = 0; i < count; i++)
  {
    for (j = 0; j < col; j++)
    {
      cout << check[i][j] << "\t";
    }
    cout << "\n";
  }
  return 0;
}

/*

Sample Output:

Enter the row size: 4
Enter the column size: 5
Enter the 20 binary elements:
0 1 0 0 1
1 0 1 1 0
0 1 0 0 1
1 0 1 0 0
The given matrix is:
0       1       0       0       1
1       0       1       1       0
0       1       0       0       1
1       0       1       0       0

The Unique rows of the given array are:
0       1       0       0       1
1       0       1       1       0
1       0       1       0       0
*/
