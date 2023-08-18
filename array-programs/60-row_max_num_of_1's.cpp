// Write a Cpp program to find the row with maximum number of 1's in 2D array;

#include <iostream>
using namespace std;

int main()
{
   int row, col, count1s = 0, count, i, j, index;
   cout << "Enter the row size of the matrix: ";
   cin >> row;
   cout << "Enter the column size of the matrix: ";
   cin >> col;
   int mat[row][col];
   cout << "Enter the " << row * col << " elements: \n";
   for (i = 0; i < row; i++)
   {
      count = 0;
      for (j = 0; j < col; j++)
      {
         cin >> mat[i][j];
         if (mat[i][j] == 1)
         {
            count++;
         }
      }
      if (count1s < count)
      {
         count1s = count;
         index = i;
      }
   }
   cout << "The given matrix is: \n";
   for (i = 0; i < row; i++)
   {
      for (j = 0; j < col; j++)
      {
         cout << mat[i][j] << "  ";
      }
      cout << "\n";
   }
   cout << "The index of row with maximum 1's is: " << index << endl;
}

/*
Output :

Enter the row size of the matrix: 5
Enter the column size of the matrix: 5
Enter the 25 elements:
0 1 0 1 1
1 1 1 1 1
1 0 0 1 0
0 0 0 0 0
1 0 0 0 1
The given matrix is:
0  1  0  1  1
1  1  1  1  1
1  0  0  1  0
0  0  0  0  0
1  0  0  0  1
The index of row with maximum 1's is: 1
*/