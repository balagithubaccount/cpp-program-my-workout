// Write a Cpp program to find the maximum of four number without using logical operators.

#include <iostream>
int main()
{
    int n1, n2, n3, n4;
    int max;

    printf("Input the four numbers: \n");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);

    if(n1 > n2)
    {
        if(n1 > n3)
        {
            if(n1 > n4)
            {
                max = n1;
            }
            else
            {
                max =n4;
            }
        }
        else if(n3 > n4)
        {
            max = n3;
        }
        else
        {
            max = n4;
        }
    }
    else if(n2 > n3 )
    {
        if(n2 > n4)
        {
            max = n2;
        }
        else
        {
            max = n2;
        }
    }
    else
    {
        if(n3 > n4)
        {
            max = n3;
        }
        else
        {
            max = n4;
        }
    }
    printf("Biggest number is: %d\n", max);
    return 0;
}

/*
Sample output: 

Input the four numbers: 
45
23
12
32
Biggest number is: 45
*/