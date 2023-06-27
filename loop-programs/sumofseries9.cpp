// Write a Cpp program  sum of the series 9+99+999+....

#include <iostream>
using namespace std;
int main()
{
  int n, i, j, sum = 0, v = 9;
  cout << "Input the number of Terms: ";
  cin >> n;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= 1; j++)
    {
      cout << v << " ";
    }
    (i != n) ? cout << "+ " : cout << "";
    sum = sum + v;
    v = (10 * v) + 9;
  }
  cout << "\nThe sum of the series = " << sum << "\n";
  return 0;
}
/*
Sample output:

Input the number of Terms: 5
9 + 99 + 999 + 9999 + 99999
The sum of the series = 111105

*/