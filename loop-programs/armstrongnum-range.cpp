// Write a Cpp program to find the Armstrong number for a given range of number.

#include <iostream>
using namespace std;

int main()
{
    int start, end, term, num, r, a, c, count = 0, sum = 0;

    cout << "Input the starting number: ";
    cin >> start;

    cout << "Input the ending number: ";
    cin >> end;

    cout << "Armstrong number in given range are: "; // start =50, end =160

    for (num = start; num <= end; num++) // num=50
    {
        count = 0;
        sum = 0;
        for (term = num; num != 0; num = num / 10) // term=50
        {
            count++;
        }
        for (num = term; term != 0; term = term / 10) // num=50
        {
            r = term % 10;
            c = 1;
            for (a = 1; a <= count; a++)
            {
                c = c * r;
            }
            sum = sum + c;
        }
        if (sum == num)
        {
            cout << num << " ";
        }
    }
    cout << "\n";
    return 0;
}

/*
Sample Output:

Input the starting number: 1
Input the ending number: 200
Armstrong number in given range are: 1 2 3 4 5 6 7 8 9 153

*/