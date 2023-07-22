// Write a Cpp program to print or display the lower triangular of a given matrix.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, zero = 0;
  cout << "Enter the size of the square matrix: ";
  cin >> size;
  int matrix[size][size], lowmat[size][size];
  cout << "Enter the elements: \n";
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      cin >> matrix[i][j];
    }
  }

  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      if (i > 0 && j < i)
        lowmat[i][j] = zero;
      else
        lowmat[i][j] = matrix[i][j];
    }
  }
  cout << "Lower triangle is: \n";
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      cout << lowmat[i][j] << "\t";
    }
    cout << "\n";
  }
  return 0;
}
/*
Output :

Enter the size of the square matrix: 3
Enter the elements:
1 2 3
4 5 6
7 8 9
Lower triangle is:
1       2       3
0       5       6
0       0       9
*/