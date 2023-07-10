// Write a Cpp program to insert New value in the array

#include <iostream>
using namespace std;

int main()
{
  int num, i, j, k;
  cout << "Input the total element of an array: ";
  cin >> num;
  num = num + 1;
  int insertarr[num];
  cout << "Input the " << num - 1 << " values: \n";
  for (i = 0; i < num - 1; i++)
  {
    cout << "Element " << i << ": ";
    cin >> insertarr[i];
  }
  cout << "Input the value to be inserted: ";
  cin >> insertarr[num - 1];

  cout << "Input the Position: ";
  cin >> j;

  cout << "The current list of the array: \n";
  for (i = 0; i < num - 1; i++)
  {
    cout << insertarr[i] << " ";
  }
  cout << "\nAfter insert the element the new array:\n";
  for (i = 0; i < num - 1; i++)
  {
    if (i == (j - 1))
    {
      j = insertarr[i];
      insertarr[i] = insertarr[num - 1];
      for (k = num - 1; k > i; k--)
      {
        if (k == (i + 1))
          insertarr[i + 1] = j;
        else
          insertarr[k] = insertarr[k - 1];
      }
      break;
    }
  }
  for (i = 0; i < num; i++)
  {
    cout << insertarr[i] << " ";
  }
  cout << "\n";
  return 0;
}
/*
Output:

Input the total element of an array: 5
Input the 5 values:
Element 0: 1
Element 1: 5
Element 2: 2
Element 3: 4
Element 4: 3
Input the value to be inserted: 0
Input the Position: 2
The current list of the array:
1 5 2 4 3
After insert the element the new array:
1 0 5 2 4 3



#include<stdio.h>
void main()
{
  int num,i,j,pos;
  cout << "Enter the array size: ";
  cin >> num;
  num=num+1;
  int mainarr[num],copyarr[num-1];
  cout << "Enter the " << num-1 << " values: \n";
  for(i=0; i<num-1; i++)
  {
    cout << "element " << i << ": ";
    cin >> mainarr[i];
    copyarr[i]=mainarr[i];
  }
  cout << "Input the insert value and the position: ");
  cin >> mainarr[num-1] >> pos;
  mainarr[pos-1]=mainarr[num-1];

  cout << "Before insert the array list is:\n";
  for(i=0; i<num-1; i++)
   cout << copyarr[i] << " ";
  for(i=0; i<num; i++)
  {
   if(i==(pos-1))
    {
     mainarr[i]=mainarr[num-1];
     j=0;
    }
   else if(j==0)
      mainarr[i+1]=copyarr[i];
   else if(i!=(pos-1))
     mainarr[i]=copyarr[i];
  }
  cout << "After insert the element the new array:\n";
  for(i=0; i<num; i++)
   cout << mainarr[i] << " ";
  cout << "\n";
}*/

/*
Sample Output:

Input the total element of an array: 5
Input the 5 values:
Element 0: 1
Element 1: 5
Element 2: 2
Element 3: 4
Element 4: 3
Input the value to be inserted: 0
Input the Position: 2
The current list of the array:
1 5 2 4 3
After insert the element the new array:
1 0 5 2 4 3
*/