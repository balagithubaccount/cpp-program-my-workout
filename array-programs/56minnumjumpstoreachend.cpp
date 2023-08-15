// Write a Cpp program to return the minimum number of jumps to reach the end of the array.

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, index = 0, big, swap;
  cout << "Enter the size of the array: ";
  cin >> size;
  int arr[size];
  cout << "Enter the " << size << " elements only using (1 to 9): "; // not using zero and negative values
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "The Given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  i = swap = 0;

start:
  if (i == 0 && index + arr[i] >= size - 1)
  {
    swap++;
    goto end;
  }
  if (arr[i] == 1)
  {
    swap++;
    i++;
    index = i;
    if (i + arr[i] >= (size - 1))
    {
      swap++;
      goto end;
    }
    goto start;
  }

  if (arr[i] > 1)
  {
    if (index + arr[i] >= size - 1)
    {
      swap++;
      goto end;
    }
    big = arr[i + 1]; // cout << "\nbig=%d\n",big);
    index = i + 1;
    for (j = i + 1; j <= i + arr[i]; j++)
    {
      if (big <= arr[j])
      {
        big = arr[j];
        index = j;
      }

    } // cout << "\nbig=%d\n",big);
      // cout << "\nindex=%d\n",index);
    if ((index + big) >= (size - 1))
    {
      swap += 2;
      goto end;
    }
    else
    {
      swap++;
      i = index;
      goto start;
    }
  }
end:
  cout << "\nThe minimum number of jumps is required to reach end is: " << swap << endl;
  return 0;
}
/*
Output:

Enter the size of the array: 11
Enter the 11 elements only using (1 to 9): 1 3 5 8 9 2 1 4 6 9 1
The Given array is: 1 3 5 8 9 2 1 4 6 9 1
The minimum number of jumps is required to reach end is: 3
*/
