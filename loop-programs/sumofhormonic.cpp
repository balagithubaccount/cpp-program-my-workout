// sumofhormonic series in  n terms...

#include <iostream>
using namespace std;

int main()
{
  int n, i, a = 1;
  float t, sum = 0, d = 1;
  cout << "Input the number of terms: ";
  cin >> n;

  for (i = 1; i <= n; i++)
  {
    (i == n) ? cout << a << "/" << i : cout << a << "/" << i << "+";
  }
  cout << "\n";
  for (i = 1; i <= n; i++)
  {
    t = 1 / d;
    d++;
    sum = sum + t;
  }
  cout << "Sum of series upto " << n << " terms : " << sum << ".\n";
  return 0;
}

/*

Output:

Input the number of terms: 7
1/1+1/2+1/3+1/4+1/5+1/6+1/7
Sum of series upto 7 terms : 2.59286.
*/
