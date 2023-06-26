// sum of series 1+x+x^2/2!+x^3/3!+....

#include <iostream>
using namespace std;

int main()
{
  int n, x, i, a;
  float c = 1, fac = 1, s, sum = 0;
  cout << "Input the number of terms: ";
  cin >> n;
  cout << "Input the x value: ";
  cin >> x;

  for (a = 1; a < n; a++)
  {
    c = 1, fac = 1;
    for (i = 1; i <= a; i++)
    {
      c = c * x;
    }
    for (i = 1; i <= a; i++)
    {
      fac = fac * i;
    }
    s = c / fac;
    sum = sum + s;
  }
  sum = sum + 1;
  cout << "The sum of the series " << n << " terms is: " << sum << endl;
}
/*
Sample Output:

Input the number of terms: 5
Input the x value: 3
The sum of the series 5 terms is: 16.375

*/