

// Write a Cpp program to swap two numbers using function.

#include <iostream>
using namespace std;

void swap(int *num1, int *num2)
{
   int temp = *num1;
   *num1 = *num2;
   *num2 = temp;
}
int main()
{
   int n1, n2;
   cout << "Enter the first number: ";
   cin >> n1;
   cout << "Enter the second number: ";
   cin >> n2;
   cout << "Before calling function num1 = " << n1 << ", num2 = " << n2 << endl;
   swap(&n1, &n2);
   cout << "After calling function num1 = " << n1 << ", num2 = " << n2 << endl;
   return 0;
}

/*
Sample Output:

Enter the first number: 59
Enter the second number: 95
Before calling function num1 = 59, num2 = 95
After calling function num1 = 95, num2 = 59

*/
