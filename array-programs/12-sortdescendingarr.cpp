// Write a program in Cpp to sort elements of the array in descending order.

#include <iostream>
using namespace std;

int main()
{
  int num, i, j, temp;
  cout << "Input the total elements: ";
  scanf("%d", &num);
  int element[num];
  cout << "Enter the " << num << " elements: \n";
  for (i = 0; i < num; i++)
  {
    cout << "element " << i << " : ";
    cin >> element[i];
  }
  for (i = 0; i < num; i++)
  {
    for (j = i + 1; j < num; j++)
    {
      if (element[i] < element[j])
      {
        temp = element[j];
        element[j] = element[i];
        element[i] = temp;
      }
    }
  }
  cout << "Elements of array sorted in descending order:\n";
  for (i = 0; i < num; i++)
    cout << element[i] << " ";
  cout << "\n";
}
/*
Sample Output:

Input the total elements: 5
Enter the 5 elements:
element 0 : 5
element 1 : 4
element 2 : 9
element 3 : 1
element 4 : 8
Elements of array sorted in descending order:
9 8 5 4 1
*/
