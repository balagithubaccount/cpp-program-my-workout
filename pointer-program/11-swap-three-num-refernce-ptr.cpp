// Write a Cpp program to swap three elements using call by reference.

#include <iostream>
using namespace std;

void swap(int *p1, int *p2, int *p3)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = *p3;
    *p3 = temp;
}
int main()
{
    int a, b, c;
    cout << "Input three integer values: \n";
    cin >> a >> b >> c;

    cout << "Before swapping a = " << a << ", b = " << b << ", c = " << c << endl;
    swap(&a, &b, &c);

    cout << "After swapping a = " << a << ", b = " << b << ", c = " << c << endl;
    return 0;
}

/*
Sample Output:

Input three integer values: 
11
12
13
Before swapping a = 11, b = 12, c = 13
After swapping a = 12, b = 13, c = 11


*/
