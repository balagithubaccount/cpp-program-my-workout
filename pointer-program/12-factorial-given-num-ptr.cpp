//  Write a program in Cpp to find the factorial of a given number using pointers.

#include <iostream>
using namespace std; 

int find_fact(int *p)
{
  int fact = 1;
  for (; *p > 0; (*p)--)
  {
    fact = fact * (*p);
  }
  return fact;
}

int main()
{
  int n;
  int *ptr = &n;

  cout << "Input a number: ";
  cin >> *ptr;

  cout << "The Factorial of " << *ptr << " is: " << find_fact(&n) << endl;
}

/*
Sample Output:

Input a number: 5
The Factorial of 5 is: 120

*/