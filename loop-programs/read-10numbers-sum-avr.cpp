// Write a Cpp program To read 10 numbers from keyboard and find their sum and average.

#include <iostream>
using namespace std;

int main()
{
    float avr, sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Enter " << i << " number: ";
        cin >> avr;
        sum = sum + avr;
    }
    avr = sum / 10;
    cout << "sum is: " << sum << "\nAverage is: " << avr << endl;

    return 0;
}

/*
Sample Output:

Enter 1 number: 2
Enter 2 number: 5
Enter 3 number: 7
Enter 4 number: 9
Enter 5 number: 1
Enter 6 number: 3
Enter 7 number: 7
Enter 8 number: 4
Enter 9 number: 5
Enter 10 number: 9
sum is: 52
Average is: 5.2

*/