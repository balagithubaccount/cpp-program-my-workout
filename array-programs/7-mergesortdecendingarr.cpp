// Write a program in Cpp to merge two arrays of same size sorted in decending order

#include <iostream>
using namespace std;

int main()
{
  int size, i, merge, temp;
  cout << "Enter the size of the array: ";
  cin >> size;
  merge = size + size;
  int arrone[size], arrtwo[size], arrmerge[merge];
  cout << "Enter the element of first array:\n";
  for (i = 0; i < size; i++)
  {
    cout << i << " element: ";
    cin >> arrone[i];
    arrmerge[i] = arrone[i];
  }
  cout << "Enter the elements in second array:\n";
  for (i = 0; i < size; i++)
  {
    cout << i << " element: ";
    cin >> arrone[i];
    arrmerge[i + size] = arrone[i];
  }
  cout << "Merged arrays is: ";
  for (i = 0; i < merge; i++)
  {
    cout << arrmerge[i] << " ";
  }
  cout << "\n";
  for (i = 0; i < merge; i++)
  {
    for (int j = i + 1; j < merge; j++)
    {
      if (arrmerge[i] < arrmerge[j])
      {
        temp = arrmerge[i];
        arrmerge[i] = arrmerge[j];
        arrmerge[j] = temp;
      }
    }
  }

  cout << "Sorted in decending order of the array : ";
  for (i = 0; i < merge; i++)
    cout << arrmerge[i] << " ";
  cout << "\n";
}

/*

Output:

Enter the size of the array: 4
Enter the element of first array:
0 element: 1
1 element: 2
2 element: 3
3 element: 4
Enter the elements in second array:
0 element: 1
1 element: 3
2 element: 5
3 element: 8
Merged arrays is: 1 2 3 4 1 3 5 8
Sorted in decending order of the array : 8 5 4 3 3 2 1 1

*/