// Write a C program to input angles of a triangle is valid or not.

#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cout << "Enter the three Angles: \n";
    scanf("%d%d%d", &A, &B, &C);

    if ((A + B + C) == 180)
        cout << "You Entered angles are make a valid triangle.\n";
    else
        cout << "You Entered angles are not make a valid triangle.\n";

    return 0;
}

/*
Output:

Enter the three Angles:
60
40
80
You Entered angles are make a valid triangle.

*/