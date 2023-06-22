//Write a Cpp program To find the sum of first 10 natural numbers

#include <iostream>
using namespace std;

int main()
{
    int sum =0;
    for(int i=1; i<=10; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of first 10 natural numbers is: " << sum << endl;
    return 0;
}

/*
Sample Output:

Sum of first 10 natural numbers is: 55

*/