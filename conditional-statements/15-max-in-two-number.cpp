// Write a Cpp program to find maximum between two numbes using ternary operator.

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    printf("Input the two numbers: \n");
    scanf("%d%d", &n1, &n2);

    (n1 > n2) ? printf("Biggest number is: %d\n", n1) : printf("Biggest number is: %d\n", n2);
    return 0;
}

/*
Sample Output:

Input the two numbers: 
45
34
Biggest number is: 45

*/