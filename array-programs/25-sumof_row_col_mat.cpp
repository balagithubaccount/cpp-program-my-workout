// Write a Cpp program to find sum of rows and columns of a matrix.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, k = 0, sum;
  cout << "Enter the size of the square matrix: ";
  cin >> size;
  int matrix[size][size];
  int add[size * 2];
  cout << "Enter the elements: \n";
  for (i = 0; i < size; i++)
  {
    sum = 0;
    for (j = 0; j < size; j++)
    {
      cin >> matrix[i][j];
      sum = sum + matrix[i][j];
    }
    add[k] = sum;
    k++;
  }
  for (i = 0; i < size; i++)
  {
    sum = 0;
    for (j = 0; j < size; j++)
    {
      sum = sum + matrix[j][i];
    }
    add[k] = sum;
    k++;
  }
  k = 0;
  cout << "The sum of the row and columns of the matrix is: \n";
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      cout << matrix[i][j] << "\t";
    }
    cout << add[k] << endl;
    k++;
  }
  cout << "\n";
  for (i = 0; i < size; i++, k++)
  {
    cout << add[k] << "\t";
  }
  cout << "\n";
  return 0;
}

/*
Output:

Enter the size of the square matrix: 3
Enter the elements:
9 8 7
6 5 4
3 2 1
The sum of the row and columns of the matrix is:
9       8       7       24
6       5       4       15
3       2       1       6

18      15      12
 */
