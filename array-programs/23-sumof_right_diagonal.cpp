// Write a C progrm to find sum of right diagonals of a matrix.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, sum = 0;
  cout << "Enter the size of the square matrix: ";
  cin >> size;
  int matrix[size][size];
  cout << "Enter the lements\n";
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      cout << "Element [" << i << "][" << j << "]: ";
      cin >> matrix[i][j];
    }
  }
  cout << "Given matrix is:\n";
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      cout << matrix[i][j] << "\t";
    }
    cout << "\n";
  }
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      if (i == j)
        sum = sum + matrix[i][j];
    }
  }
  cout << "Sum of the right diagonal elements is " << sum << endl;
  return 0;
}

/*
 Output:

Enter the size of the square matrix: 3
Enter the lements
Element [0][0]: 1
Element [0][1]: 2
Element [0][2]: 3
Element [1][0]: 4
Element [1][1]: 5
Element [1][2]: 6
Element [2][0]: 7
Element [2][1]: 8
Element [2][2]: 9
Given matrix is:
1       2       3
4       5       6
7       8       9
Sum of the right diagonal elements is 15

*/
