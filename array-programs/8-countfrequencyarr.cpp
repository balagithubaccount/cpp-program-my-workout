// Write a program in Cpp to count the frequency of each element of an array.

#include <iostream>
using namespace std;
 
int main()
{
  int total_element, i, j, count, k = 0, exit, l;

  cout << "Enter the total elements of an array: ";
  cin >> total_element;

  int arrelement[total_element], arrcopy[total_element], arrfreq[total_element];
  int checked[total_element];

  cout << "Enter the " << total_element << " values: \n";
  for (i = 0; i < total_element; i++)
  {
    cout << "element " << i << ": ";
    cin >> arrelement[i];
    arrcopy[i] = arrelement[i];
  }

  for (i = 0; i < total_element; i++)
  {
    count = 1, exit = 0;
    for (l = 0; l < k; l++)
    {
      if (arrelement[i] == checked[l])
        exit = 1;
    }
    if (exit != 1)
    {
      for (j = 0; j < total_element; j++)
      {
        if (j != i && arrelement[i] == arrcopy[j])
          count++;
      }
      cout << arrelement[i] << " occurs " << count << " times\n";
    }
    checked[k++] = arrelement[i];
  }

  checked[k++] = arrelement[i];

  return 0;
}
/*
Sample Output:

Enter the total elements of an array: 10
Enter the 10 values:
element 0: 5
element 1: 6
element 2: 5
element 3: 6
element 4: 5
element 5: 6
element 6: 5
element 7: 6
element 8: 5
element 9: 9
5 occurs 5 times
6 occurs 4 times
9 occurs 1 times
*/