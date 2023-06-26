// sum of the series

#include <iostream>
using namespace std;

int main()
{
  int n, x, a, b, f, count = 0;
  float s, sum = 0, c, fac = 1;
  cout << "Input the terms: ";
  cin >> n;
  cout << "Input the value of X: ";
  cin >> x;

  for (a = 1; a < n; a++)
  {
    fac = 1, c = 1;
    for (b = 1; b <= a * 2; b++)
    {
      c = c * x;
    }

    f = a * 2;
    for (b = 1; b <= f; b++)
    {
      fac = fac * b;
    }

    s = c / fac;

    count++;
    if (count % 2 == 0)
    {
      s = 1 * s;
    }
    else
    {
      s = (-1) * s;
    }
    sum = sum + s;
  }
  sum = sum + 1;

  cout << "The value of x: " << x << endl;
  cout << "Number of terms: " << n << endl;
  cout << "The sum is: " << sum << endl;

  return 0;
}

/*
Output:

Input the terms: 5
Input the value of X: 2
The value of x: 2
Number of terms: 5
The sum is: -0.415873

*/