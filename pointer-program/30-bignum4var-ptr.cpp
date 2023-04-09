// Write a Cpp program to find the biggest number in four variables using pointer.


#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    int *A, *B, *C, *D;
    A = &a, B = &b, C = &c, D = &d;

    cout << "Input the 4 values: ";
    cin >> *A >> *B >> *C >> *D;

    if (*A >= *B && *A >= *C && *A >= *D)
    {
        cout << "big is " << *A << endl;
    }
    else if (*B >= *A && *B >= *C && *B >= *D)
    {
        cout << "big is " << *B << endl;
    }
    else if (*C >= *A && *C >= *B && *C >= *D)
    {
        cout << "big is " << *C << endl;
    }
    else
    {
        cout << "big is " << *D << endl;
    }

    return 0;
}
/*
Sample Output:

Input the 4 values: 21 34 54 65
big is 65

*/
