// Write a Cpp program to Transpose of a given matrix.

#include <iostream>
using namespace std;

int main()
{
   int i, j, row, col;
   cout << "Enter the row and column size:\n";
   cin >> row >> col;
   int mat[row][col];
   cout << "Enter the " << row * col << " elements for matrix:\n";
   for (i = 0; i < row; i++)
   {
      for (j = 0; j < col; j++)
      {
         cin >> mat[i][j];
      }
   }
   cout << "Given matrix is:\n";
   for (i = 0; i < row; i++)
   {
      for (j = 0; j < col; j++)
      {
         cout << mat[i][j] << "\t";
      }
      cout << "\n";
   }
   cout << "Transpose of a given matrix is:\n";
   for (i = 0; i < col; i++)
   {
      for (j = 0; j < row; j++)
      {
         cout << mat[j][i] << "\t";
      }
      cout << "\n";
   }
   return 0;
}


/*
output:

Enter the row and column size:
3
4
Enter the 12 elements for matrix:
1
2
3
4
5
6
7
8
9
10
11
12
Given matrix is:
1       2       3       4
5       6       7       8
9       10      11      12
Transpose of a given matrix is:
1       5       9
2       6       10
3       7       11
4       8       12

*/
