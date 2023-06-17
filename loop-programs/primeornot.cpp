// Write a Cpp program to determine whether a given number is prime or not.

#include <iostream>
using namespace std;

int main()
{
  int i, num, count = 0;
  cout << "Input the number: ";
  cin >> num;

  for (i = 1; i <= num; i++)
  {
    if (num % i == 0)
    {
      count++;
    }
  }
  if (count == 2)
  {
    cout << num << " is a prime number.\n";
  }
  else
  {
    cout << num << " is not a prime number.\n";
  }
  return 0;
}

/*
Sample Output:

Input the number: 34
34 is not a prime number.

*/