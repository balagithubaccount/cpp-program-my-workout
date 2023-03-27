// Write a Cpp program to demonstrate how a function returns a pointer.

#include <iostream>
using namespace std;

int* function(int *n1, int *n2)
{
    return (*n1 > *n2) ? n1 : n2 ;
}
int main()
{
    int numa, numb;
    cout << "Enter the first number: ";
    cin >> numa;

    cout << "Enter the second number: ";
    cin >> numb;

    int* result = function(&numa, &numb);

    cout << "\nLargest number is: " << *result << endl;

    return 0;
}

/*
Sample Output:

Enter the first number: 6
Enter the second number: 5

Largest number is: 6

*/