
// Write a Cpp program to check whether a year is leap year or not

#include <iostream>
using namespace std;

int main()
{
    int year;
    printf("Enter the Year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        cout << year << " is a leap year.\n";
    }
    else if(year % 100 == 0)
    {
        cout << year << " is not a leap year.\n";
    }
    else if(year % 4 == 0)
    {
        cout << year << " is a leap year.\n";
    }
    else
    {
        cout << year << " is not a leap year.\n";
    }
    return 0;
}

/*
Sample Output:

Enter the Year: 2024
2024 is a leap year.

*/