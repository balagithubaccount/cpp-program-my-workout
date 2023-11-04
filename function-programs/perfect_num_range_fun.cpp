
// Write a Cpp program to print all perfect numbers in given range using the function.

#include <iostream>
using namespace std;

int perfect_num(int start, int end)
{
   int i, j, sum;
   cout << "The perfect numbers between " << start << " to " << end << " are: ";
   for (i = start; i <= end; i++)
   {
      sum = 0;
      for (j = 1; j < i; j++)
      {
         if (i % j == 0)
         {
            sum = sum + j;
         }
      }
      if (sum == i)
      {
         cout << i << " ";
      }
   }
}
int main()
{
   int start_num, end_num;
   cout << "Enter the starting number for find perfect number: ";
   cin >> start_num;
   cout << "Enter the ending number for find perfect number: ";
   cin >> end_num;
   perfect_num(start_num, end_num);
   cout << "\n";
   return 0;
}
/*
Sample Output:

Enter the starting number for find perfect number: 1
Enter the ending number for find perfect number: 100
The perfect numbers between 1 to 100 are: 6 28
*/