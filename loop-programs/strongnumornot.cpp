/*
   Strong Number:

        Strong number is a special number whose sum of the factorial of digits is equal to the original number.
   For Example:
        145 is strong number. Since, 1!+4!+5!=145.
*/

// Write a Cpp program to check whether a number is a Strong Number or not.
  
#include <iostream>
using namespace std;

int main()
{
  int num, term, fac, f, i, sum, r;
  cout << "Input the integer Number: ";
  cin >> num;
  sum = 0;

  for (term = num; num != 0; num = num / 10)
  {
    fac = 1;
    r = num % 10;
    for (i = r; r > 0; r--)
    {
      fac = fac * r;
    }
    sum = sum + fac;
  }
  if (sum == term)
  {
    cout << "Input number " << term << " is a Strong Number.\n";
  }
  else
  {
    cout << "Input number " << term << " is not a Strong Number.\n";
  }
  return 0;
}

/*
Sample Output:

Input the integer Number: 145
Input number 145 is a Strong Number.

*/