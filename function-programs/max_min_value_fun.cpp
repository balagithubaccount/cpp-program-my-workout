
// Write a Cpp program to find out maximum and minimum of some values using function which will return an array.

#include <iostream>
using namespace std;

int i, j, size, max_n, min_n;
int max_num(int arr[])
{
   max_n = arr[0], j = 0;
   for (i = 0; i < size; i++)
   {
      if (max_n < arr[i])
      {
         max_n = arr[i];
         j = i;
      }
   }
   return arr[j];
}
int min_num(int arr[])
{
   min_n = arr[0], j = 0;
   for (i = 0; i < size; i++)
   {
      if (min_n > arr[i])
      {
         min_n = arr[i];
         j = i;
      }
   }
   return arr[j];
}

int main()
{
   cout << "Enter the size of the array: ";
   cin >> size;
   int array[size];
   cout << "Enter the " << size << " Elements:\n";
   for (i = 0; i < size; i++)
   {
      cin >> array[i];
   }
   cout << "\nNumber of values you want to input: Input " << size << " values.\n";
   cout << "minimum Value is: " << min_num(array) << endl;
   cout << "maximum Value is: " << max_num(array) << endl;
   return 0;
}

/*
Sample Output:

Enter the size of the array: 5
Enter the 5 Elements:
25
11
35
65
20

Number of values you want to input: Input 5 values.
minimum Value is: 11
maximum Value is: 65
  */
