// Write a Cpp program to display the n terms of square natural number and their sum.
// 1 4 9 16 ... n Terms    

#include <iostream>
using namespace std;

int main()
{
  int n, a, i, sqr = 1, count = 0, sum = 0;
  cout << "Input the number of terms: ";
  cin >> n;
  for (a = 1; a > 0; a++)
  {
    sqr = 1;
    for (i = 1; i < 3; i++)
    {
      sqr = sqr * a;
    }
    count++;
    cout << sqr << " ";
    sum = sum + sqr;
    if (count == n)
    {
      break;
    }
  }
  cout << "\n";
  cout << "The sum of " << n << " sum terms of natural numbers is: " << sum << endl;

  return 0;
}

/*
Sample Output:

Input the number of terms: 10
1 4 9 16 25 36 49 64 81 100
The sum of 10 sum terms of natural numbers is: 385

*/