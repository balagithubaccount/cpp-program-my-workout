
// Write a C program to calculate profit and loss on a transaction.

#include <iostream>
using namespace std;

int main()
{
    float inves, gain;
    cout << "Enter the Investment amount: ";
    cin >> inves;
    cout << "Enter the Gain amount: ";
    cin >> gain;

    if (inves < gain)
    {
        cout << "Your profit amount is: " << gain - inves << "\nAnd no loss.\n";
    }
    else if (inves > gain)
    {
        cout << "Your loss amount is: " << inves - gain << "\nNo profit.\n";
    }
    else
    {
        printf("No profit and No loss,\n Just Experience.\n");
    }

    return 0;
}

/*
Sample Output:

Enter the Investment amount: 345.543
Enter the Gain amount: 406.76
Your profit amount is: 61.217
And no loss.

*/