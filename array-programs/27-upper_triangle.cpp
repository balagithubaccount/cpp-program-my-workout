// Write a Cpp program To print or display upper triangular matrix.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, zero = 0;
  cout << "Enter the matrix size: ";
  cin >> size;
  int matrix[size][size], uppermat[size][size];
  cout << "Enter the elements: \n";
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      cin >> matrix[i][j];
      uppermat[i][j] = matrix[i][j];
    }
  }
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      if (j > 0 && i < j)
        uppermat[i][j] = zero;
    }
  }
  cout << "\nUpper triangle is: \n";
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      cout << uppermat[i][j] << "\t";
    }
    cout << "\n";
  }
  return 0;
}

/*
Output:


Enter the matrix size: 5
Enter the elements:
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
Upper triangle is:
5       0       0       0       0
5       4       0       0       0
5       4       3       0       0
5       4       3       2       0
5       4       3       2       1

*/
