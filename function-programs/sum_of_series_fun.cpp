
// Write a Cpp program to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5+... using the function.
 
#include <iostream>
using namespace std;

void sum_series(int term);
int main()
{
   int term;
   cout << "Enter the terms: ";
   cin >> term;
   sum_series(term);
   return 0;
}
void sum_series(int term)
{
   int i, j;
   float fac, sum = 0;
   for (i = 1; i <= term; i++)
   {
      fac = 1;
      for (j = i; j >= 1; j--)
      {
         fac = fac * j;
      }
      sum = sum + (fac / i);
   }
   cout << "The sum of the series is: " << sum << endl;
}

/*
Sample Output:1

Enter the terms: 5
The sum of the series is: 34
*/
