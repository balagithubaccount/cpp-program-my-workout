// Palintrome

#include <iostream>
using namespace std;

int main()
{
  int palindrome[1], i, rem, sum = 0;
  cout << "Enter the number for to find the palindrome or not: ";
  cin >> palindrome[0];
  for (i = palindrome[0]; palindrome[0] != 0; palindrome[0] /= 10)
  {
    // test line for git
    rem = palindrome[0] % 10;
    sum = (sum * 10) + rem;
  }
  if (sum == i)
  {
    cout << "The given number " << i << " is a palindrome.\n";
  }
  else
  {
    cout << "The given number " << i << " is not a palindrome.\n";
  }
}

/*
Output 1:

Enter the number for to find the palindrome or not: 12321
The given number 12321 is a palindrome.

Output 2:

Enter the number for to find the palindrome or not: 1231
The given number 1231 is not a palindrome.

*/
