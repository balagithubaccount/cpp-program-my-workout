// Write a Cpp program to search an element in a row wise and column wise sorted matrix.

#include <iostream>
using namespace std;

int main()
{
  int row, col, i, j, num, temp = 0;
  cout << "Enter the row size: ";
  cin >> row;
  cout << "Enter the column size: ";
  cin >> col;
  int mat[row][col];
  cout << "Enter the " << row * col << " Elements: \n";
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      cin >> mat[i][j];
    }
  }
  cout << "The Given matrix is: \n";
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      cout << mat[i][j] << "\t";
    }
    cout << "\n";
  }
  cout << "Input The given value for searching is: ";
  cin >> num;
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      temp = 0;
      if (mat[i][j] == num)
      {
        temp = 1;
        cout << "The element " << num << " Found at the position in the matrix is: " << i << ", " << j << endl;
        ;
        break;
      }
    }
    if (temp == 1)
    {
      break;
    }
  }
  if (temp != 1)
  {
    cout << "\nThe searching number " << num << " is not found at the given matrix.\n";
  }
  return 0;
}

/*
Output:

Enter the row size: 4
Enter the column size: 4
Enter the 16 Elements:
15 23 31 39
18 26 36 43
25 28 37 48
30 34 39 50
The Given matrix is:
15      23      31      39
18      26      36      43
25      28      37      48
30      34      39      50
Input The given value for searching is: 37
The element 37 Found at the position in the matrix is: 2, 2

*/
