// Write a program in Cpp to insert New value in the array

#include <iostream>
using namespace std;

int main()
{
  int num, i, j, temp;
  cout << "Enter the total elements in array: ";
  cin >> num;
  num = num + 1;
  int insertarr[num];
  cout << "Enter the " << num - 1 << " values:\n";
  for (i = 0; i < num - 1; i++)
  {
    cout << "element " << i << ": ";
    cin >> insertarr[i];
  }
  cout << "Input the value to be inserted: ";
  cin >> insertarr[num - 1];
  cout << "The exist array list is:\n";
  for (i = 0; i < num - 1; i++)
    cout << insertarr[i] << " ";
  cout << "\nAfter inserted the list is:\n";
  for (i = 0; i < num; i++)
  {
    for (j = i + 1; j < num; j++)
    {
      if (insertarr[i] > insertarr[j])
      {
        temp = insertarr[j];
        insertarr[j] = insertarr[i];
        insertarr[i] = temp;
      }
    }
  }
  for (i = 0; i < num; i++)
    cout << insertarr[i] << " ";
  cout << "\n";
}

/*
Sample Output:

Enter the total elements in array: 5
Enter the 5 values:
element 0: 2
element 1: 5
element 2: 7
element 3: 9
element 4: 11
Input the value to be inserted: 8
The exist array list is:
2 5 7 9 11
After inserted the list is:
2 5 7 8 9 11
*/