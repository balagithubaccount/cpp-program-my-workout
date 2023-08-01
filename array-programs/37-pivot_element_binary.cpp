// Write a Cpp program to find the pivot element of a sorted and rotated array using binary search...

#include <iostream>
using namespace std;

int main()
{
  int size, i, start, end, mid, pivot, temp = 0;
  cout << "Enter the array size: ";
  scanf("%d", &size);
  int arr[size];
  cout << "Enter the " << size << " Elements: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "\nThe given array is: ";
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  start = 0, end = size - 1;
START:
  mid = (start + end) / 2;
  // cout << "\nmid=%d\n",mid);
  if (arr[mid] < arr[mid - 1] && arr[mid] < arr[mid + 1])
  {
    pivot = arr[mid];
    temp = 1;
    goto END;
  }
  else if (arr[mid] > arr[mid + 1])
  {
    pivot = arr[mid + 1];
    temp = 2;
    goto END;
  }
  else
  {
    if (arr[start] > arr[mid])
    {
      end = mid;
      // cout << "\nend=%d\n",end);
      goto START;
    }
    else
    {
      start = mid;
      // cout << "\nstart=%d\n",start);
      goto START;
    }
  }
END:
  if (arr[start] > pivot && pivot < arr[end])
  {
    cout << "\nThe Pivot element is: " << pivot << "\n";
  }
  else
  {
    if (temp == 1)
    {
      start = mid;
      goto START;
    }
  }
}

/*
Output:

Enter the array size: 11
Enter the 11 Elements: 14 23 7 9 3 6 18 22 16 36 37

The given array is: 14 23 7 9 3 6 18 22 16 36 37 
The Pivot element is: 3

*/
