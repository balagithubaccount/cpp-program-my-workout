// Write a Cpp program to find a pair with the given difference.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, giv_diff, diff, temp = 0;
  cout << "Enter the array size: ";
  cin >> size;
  int arr[size];
  cout << "Enter the " << size << " elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "Enter the difference: ";
  cin >> giv_diff;
  cout << "\nThe Given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  for (i = 0; i < size; i++)
  {
    for (j = i + 1; j < size; j++)
    {
      if ((arr[i] - arr[j]) == giv_diff || (arr[j] - arr[i]) == giv_diff)
      {
        i = arr[i];
        j = arr[j];
        temp = 1;
        goto end;
      }
    }
  }
end:
  cout << "\nThe given Difference is: " << giv_diff << endl;
  if (temp == 1)
  {
    cout << "Tha pair are: (" << i << ", " << j << ")\n";
  }
  else
  {
    cout << "\nNot pair found in the array.\n";
  }
  return 0;
}

/*
Sample Output:

Enter the array size: 5
Enter the 5 elements: 1 15 39 75 92
Enter the difference: 53

The Given array is: 1 15 39 75 92
The given Difference is: 53
Tha pair are: (39, 92)
*/
