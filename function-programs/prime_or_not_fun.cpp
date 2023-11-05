
// Write a Cpp program to check whether a number is a prime number or not using the function.

#include <iostream>
using namespace std;

void prime(int num)
{
   int flag = 0;
   if (num == 0 || num == 1)
   {
      flag = 1;
   }
   for (int i = 2; i <= num / 2; i++)
   {
      if (num % i == 0)
      {
         flag = 1;
         break;
      }
   }
   if (flag == 0)
   {
      cout << "The Entered number " << num << " is a prime number.\n";
   }
   else
   {
      cout << "The Entered number " << num << " is not a prime number.\n";
   }
}
int main()
{
   int num, i;
   for (i = 2; i >= 1; i--)
   {
      cout << "Enter the positive number: ";
      cin >> num;
      prime(num);
      cout << "\n";
   }
   return 0;
}
/*
Sample Output: 1

Enter the positive number: 5
The Entered number 5 is a prime number.

Enter the positive number: 4
The Entered number 4 is not a prime number.
*/
