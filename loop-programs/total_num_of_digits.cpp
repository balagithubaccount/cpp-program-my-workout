// Write a Cpp program to find the number of digits.

#include <iostream>
using namespace std;

int main()
{
  int num;
  int iter, count = 0;
  cout << "Enter the number: ";
  cin >> num;
  for (iter = num; num != 0; num = num / 10)
  {
    count++;
  }
  cout << "Total number of digits is: " << count << endl;

  return 0;
}

/*
Sample Output:

Enter the number: 235489
Total number of digits is: 6
*/