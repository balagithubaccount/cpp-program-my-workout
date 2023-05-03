// Write a C program to input three sides to check triangle is valid or not.

#include <stdio.h>
int main()
{

    int a, b, c;

    printf("Enter the three values, for sides of a triangle: \n");
    scanf("%d%d%d", &a, &b, &c);

    printf("Three sides are a=%d, b=%d, c=%d\n", a, b, c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("You entered values are 'Make a valid triangle'.\n");
    }
    else
    {
        printf("You entered values are 'Not make a valid triangle'.\n");
    }
    return 0;
}

/*
Output:

Enter the three values, for sides of a triangle: 
5
8
12
Three sides are a=5, b=8, c=12
You entered values are 'Make a valid triangle'.

*/