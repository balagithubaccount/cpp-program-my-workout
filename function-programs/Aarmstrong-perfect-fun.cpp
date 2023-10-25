
// Write a Cpp program to check armstrong and perfect numbers using the function.

#include <iostream>
using namespace std;

int i, sum;
void armstrong(int num, int digit)
{
   int rem, armstrong = 0, j;
   for (i = num; num != 0; num /= 10)
   {
      rem = num % 10;
      sum = 1;
      for (j = 1; j <= digit; j++)
      {
         sum = sum * rem;
      }
      armstrong = armstrong + sum;
   }
   if (armstrong == i)
   {
      cout << "The " << i << " is an Armstrong number.\n";
   }
   else
   {
      cout << "The " << i << " is not an Armstrong number.\n";
   }
}

void perfect_num(int num)
{
   sum = 0;
   for (i = 1; i < num; i++)
   {
      if (num % i == 0)
      {
         sum = sum + i;
      }
   }
   if (sum == num)
   {
      cout << "The " << num << " is a Perfect number.\n";
   }
   else
   {
      cout << "The " << num << " is not a Perfect number.\n";
   }
}
int main()
{
   int giv_num, count = 0;
   cout << "Enter the number: ";
   cin >> giv_num;
   for (i = giv_num; giv_num != 0; giv_num /= 10)
   {
      count++;
   }
   armstrong(i, count);
   perfect_num(i);
   return 0;
}

/*
Sample Output:

Enter the number: 371
The 371 is an Armstrong number.
The 371 is not a Perfect number.
*/
