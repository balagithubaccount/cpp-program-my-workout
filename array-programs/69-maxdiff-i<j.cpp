// Write a Cpp program to find out the maximum difference between any two elements such that larger element appears after the smaller number.

#include <iostream>
using namespace std;

int main()
{
   int size, i, j, diff, maxdiff, maxi, maxj;
   cout << "Enter the size of the array: ";
   cin >> size;
   int arr[size];
   cout << "Enter the " << size << " elements: ";
   for (i = 0; i < size; i++)
   {
      cin >> arr[i];
   }
   cout << "The Given array is: ";
   for (i = 0; i < size; i++)
   {
      cout << arr[i] << " ";
   }
   maxdiff = 0;
   for (i = 0; i < size; i++)
   {
      for (j = i + 1; j < size; j++)
      {
         diff = 0;
         if (arr[i] < arr[j])
         {
            diff = arr[j] - arr[i];
         }
         if (maxdiff < diff)
         {
            maxdiff = diff;
            maxi = arr[i];
            maxj = arr[j];
         }
      }
   }
   cout << "\nThe elements which provide maximum differencs is: " << maxi << ", " << maxj << endl;
   ;
   cout << "\nThe maximum difference between two elements in the array is: " << maxdiff << endl;
   return 0;
}

/*
Output:

Enter the size of the array: 6
Enter the 6 elements: 7 9 5 6 13 2
The Given array is: 7 9 5 6 13 2
The elements which provide maximum differencs is: 5, 13

The maximum difference between two elements in the array is: 8
*/
