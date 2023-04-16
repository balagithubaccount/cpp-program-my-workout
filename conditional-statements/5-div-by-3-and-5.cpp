// write a cpp program to find the divisible by 3 and 5 in 1 to 100

#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    while (x < 100)
    {
        if((x % 3 == 0 ) && (x % 5 == 0))
        {
            cout << x << endl;
        }
        x++;
    }
    return 0;
}

/*
Sample Output:

15
30
45
60
75
90

*/