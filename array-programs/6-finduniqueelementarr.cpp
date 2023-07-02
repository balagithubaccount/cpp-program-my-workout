// Write a Cpp program to find unique elements.

#include <iostream>
using namespace std;

int main()
{
  int n, i, j, count;
  cout << "Input the total number of elements in array: ";
  cin >> n;
  int unique[n];
  cout << "Enter the " << n << " values: \n";

  for (i = 0; i < n; i++)
    cin >> unique[i];

  for (i = 0; i < n; i++)
  {
    count = 0;
    for (j = 0; j < n; j++)
    {
      if (unique[i] == unique[j])
        count++;
    }
    if (count == 1)
      cout << unique[i] << "  ";
  }
  printf("\n");
  return 0;
}
/*

Sample Output:

Input the total number of elements in array: 7
Enter the 7 values:
1 2 3 5 6 7 1
2  3  5  6  7
*/