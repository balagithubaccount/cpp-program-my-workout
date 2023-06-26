// sum of series x-x^3+x^5-x^7+.....

#include <iostream>
using namespace std;

int main()
{
  int n, x, a, i, c, j = 1, sum = 0, count = 0;
  cout << "Input the x value: ";
  cin >> x;
  cout << "Input the number of terms: ";
  cin >> n;

  for (a = 1; a <= n; a++)
  {
    c = 1;
    for (i = 1; i <= j; i++)
    {
      c = c * x;
    }
    j += 2;
    count++;
    if (count % 2 != 0)
    {
      c = 1 * c;
    }
    else
    {
      c = (-1) * c;
    }
    sum = sum + c;
    cout << c << endl;
  }
  cout << "The sum = " << sum << "\n";
  return 0;
}

/*
Sample Output:

Input the x value: 2
Input the number of terms: 5
2
-8
32
-128
512
The sum = 410
*/