// Write a Cpp program To find sum of left diagonals of a matrix.

#include<iostream>
using namespace std;

int main()
{
  int size, i, j, con, sum=0;
  cout << "Enter the square matrix size: ";
  cin >> size;
  int matrix[size][size];
  con=size-1;
  cout << "Enter the elements:\n";
  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {
      cout << "Element [" << i << "],[" << j << "]: ";
      cin >> matrix[i][j];
    }
  }
  cout << "Given matrix is:\n";
  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {
      cout << "%d\t",matrix[i][j];
    }
    cout << "\n";
  }
  for(i=0; i<size; i++)
  {
    for(j=0; j<size;j++)
    {
      if((i+j)==con)
        sum=sum+matrix[i][j];
    }
  }
  cout << "Sum of the left diagonal element is: " << sum << ".\n";
  return 0;
}

/*
Output:

Enter the square matrix size: 4
Enter the elements:
Element [0],[0]: 1
Element [0],[1]: 2
Element [0],[2]: 3
Element [0],[3]: 4
Element [1],[0]: 2
Element [1],[1]: 1
Element [1],[2]: 3
Element [1],[3]: 4
Element [2],[0]: 3
Element [2],[1]: 2
Element [2],[2]: 1
Element [2],[3]: 4
Element [3],[0]: 1
Element [3],[1]: 2
Element [3],[2]: 3
Element [3],[3]: 1
Given matrix is:
1	2	3	4	
2	1	3	4	
3	2	1	4	
1	2	3	1	
Sum of the left diagonal element is: 10.

*/
