// Write a program in Cpp to sort elements of array in ascending order.

#include <iostream>
using namespace std;
 
int main()
{
  int num, i, j, term;
  cout << "Enter the total elements of an array: ";
  cin >> num;
  int elements[num];
  for (i = 0; i < num; i++)
  {
    cout << "Element " << i << ": ";
    cin >> elements[i];
  }
  for (i = 0; i < num; i++)
  {
    for (j = i + 1; j < num; j++)
    {
      if (elements[i] > elements[j])
      {
        term = elements[j];
        elements[j] = elements[i];
        elements[i] = term;
      }
    }
  }
  cout << "Elements of array sorted in ascending order:\n";
  for (i = 0; i < num; i++)
    cout << elements[i] << " ";

  cout << "\n";
  return 0;
}
/*
Sample Output:

Enter the total elements of an array: 10
Element 0: 9
Element 1: 1
Element 2: 8
Element 3: 7
Element 4: 2
Element 5: 6
Element 6: 115
Element 7: 2
Element 8: 4
Element 9: 21
Elements of array sorted in ascending order:
1 2 2 4 6 7 8 9 21 115
*/