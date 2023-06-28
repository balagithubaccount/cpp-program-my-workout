// Write a Cpp program to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.

#include <iostream>
using namespace std;

int main()
{
  int n, a, i, v = 1, sum = 0;
  cout << "Input the number of terms: ";    
  cin >> n;
  for (a = 1; a <= 1; a++)
  {
    for (i = 1; i <= n; i++)
    {
      (i != n) ? cout << v << " + " : cout << v << endl;
      sum = sum + v;
      v = (v * 10) + 1;
    }
  }
  cout << "The sum is = " << sum << endl;
  return 0;
}
/*
Sample output:

Input the number of terms: 5
1 + 11 + 111 + 1111 + 11111
The sum is = 12345

*/