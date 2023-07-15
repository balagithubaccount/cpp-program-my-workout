// Write a Cpp program to addition of two matrices.

#include <iostream>
using namespace std;

int main()
{
  int i, j, size;
  cout << "Enter the size of the matrices: ";
  cin >> size;
  int mat1[size][size], mat2[size][size], addarr[size][size];

  cout << "Enter the elements for matrix 1:\n";
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      cout << "element mat1[" << i << "][" << j << "]: ";
      cin >> mat1[i][j];
    }
  }
  cout << "Enter the elements for matrix 2:\n";
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      cout << "element mat2[" << i << "][" << j << "]: ";
      cin >> mat2[i][j];
    }
  }
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      addarr[i][j] = mat1[i][j] + mat2[i][j];
    }
  }
  cout << "Matrix 1 is:\n";
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      cout << mat1[i][j] << "\t";
    }
    cout << "\n";
  }
  cout << "Matrix 2 is:\n";
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      cout << mat2[i][j] << "\t";
    }
    cout << "\n";
  }
  cout << "Addition of two matrices is: \n";

  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      cout << addarr[i][j] << "\t";
    }
    cout << "\n";
  }

  return 0;
}
/*
Sample Output:

Enter the size of the matrices: 3
Enter the elements for matrix 1:
element mat1[0][0]: 1
element mat1[0][1]: 2
element mat1[0][2]: 3
element mat1[1][0]: 4
element mat1[1][1]: 5
element mat1[1][2]: 6
element mat1[2][0]: 7
element mat1[2][1]: 8
element mat1[2][2]: 9
Enter the elements for matrix 2:
element mat2[0][0]: 9
element mat2[0][1]: 8
element mat2[0][2]: 7
element mat2[1][0]: 6
element mat2[1][1]: 5
element mat2[1][2]: 4
element mat2[2][0]: 3
element mat2[2][1]: 2
element mat2[2][2]: 1
Matrix 1 is:
1       2       3
4       5       6
7       8       9
Matrix 2 is:
9       8       7
6       5       4
3       2       1
Addition of two matrices is:
10      10      10
10      10      10
10      10      10
*/