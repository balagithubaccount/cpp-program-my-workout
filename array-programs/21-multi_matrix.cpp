// Write a Cpp program find Multiplication of two square matrices...

#include <iostream>
using namespace std;

int main()
{
  int i, j, k, size;
  cout << "Enter the matrix size:\n";
  cin >> size;
  int mat1[size][size], mat2[size][size], mult[size][size];
  cout << "Enter the elements for matrix 1:\n";
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      cin >> mat1[i][j];
    }
  }
  cout << "Enter the elements for matrix 2:\n";
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      cin >> mat2[i][j];
    }
  }
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      mult[i][j] = 0;
      for (k = 0; k < size; k++)
      {
        mult[i][j] = mult[i][j] + mat1[i][k] * mat2[k][j];
      }
    }
  }
  cout << "Multiplication of two matrices is: \n";
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      cout << mult[i][j] << "\t";
    }
    cout << "\n";
  }
  return 0;
}

/*
Output:

Enter the matrix size:
4
Enter the elements for matrix 1:
1 1 1 1
2 2 2 2
3 3 3 3
1 1 1 1
Enter the elements for matrix 2:
2 2 2 2
3 3 3 3
1 1 1 1
2 2 2 2
Multiplication of two matrices is:
8	8	8	8
16	16	16	16
24	24	24	24
8	8	8	8
*/
