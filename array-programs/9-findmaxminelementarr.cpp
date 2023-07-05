// Write a program in Cpp to find the maximum and minimum element in an array

#include <iostream>
using namespace std;  

int main()
{
  int num, iter, max, min;
  cout << "Input the total numbers stored in array: ";
  cin >> num;
  int maxmin[num];
  cout << "Enter the " << num << " values: \n";

  for (iter = 0; iter < num; iter++)
  {
    cout << "element " << iter << ": ";
    cin >> maxmin[iter];
  }
  max = maxmin[0];
  min = maxmin[0];
  for (iter = 0; iter < num; iter++)
  {
    if (max < maxmin[iter])
      max = maxmin[iter];
    if (min > maxmin[iter])
      min = maxmin[iter];
  }
  cout << "Maximum element is: " << max << endl;
  cout << "Minimum element is: " << min << endl;

  return 0;
}
/*
Sample Output:

Input the total numbers stored in array: 5
Enter the 5 values:
element 0: 2
element 1: 17
element 2: 23
element 3: 32
element 4: 3
Maximum element is: 32
Minimum element is: 2
*/
