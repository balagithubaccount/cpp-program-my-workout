// Write a Cpp program Fibonacci series in 2 variables upto 15 numbers using pointer.

#include <iostream>
using namespace std;

int main()
{
  int a, b, c, *A, *B, *C, *ptr, i;
  A = &a, B = &b, C = &c, ptr = &i;
  *A = 0, *B = 1;
  cout << "Fibonacci Series : ";
  cout << *A << "  " << *B << "  ";
  for (*ptr = 1; *ptr < 15; (*ptr)++)
  {
    *C = *A + *B;
    cout << *C << "  ";
    *A = *B;
    *B = c;
  }
  cout << endl;

  return 0;
}

/*
Sample Output:

Fibonacci Series : 0  1  1  2  3  5  8  13  21  34  55  89  144  233  377  610

*/
