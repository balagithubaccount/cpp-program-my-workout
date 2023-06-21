// Write a Cpp program to find Strong Numbers within a range of numbers.

#include <iostream>
using namespace std;

int main()
{
  int start, end, term, num, sum, fac, r, i;
  cout << "Input the starting number: ";
  cin >> start;
  cout << "Input the ending number: ";
  cin >> end;

  for (term = start; term <= end; term++)
  {
    sum = 0;
    num = term;
    for (num = num; num != 0; num = num / 10)
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
      cout << term << " ";
    }
  }
  cout << endl;
}

/*
Sample Output:

Input the starting number: 1
Input the ending number: 500
1 2 145

*/
