//Write a Cpp program To display the cube of the number upto given an integer.
    
#include <iostream>
using namespace std;

int main()
{
    int start, end;
    cout << "Starting number: ";
    cin >> start;
    cout << "Ending number: ";
    cin >> end;
    for (int i = start; i <= end; i++)
    {
        cout << "cube of " << i << " is : " << (i * i * i) << endl;
    }
    return 0;
}

/*

Sample Output:

Starting number: 1
Ending number: 6
cube of 1 is : 1
cube of 2 is : 8
cube of 3 is : 27
cube of 4 is : 64
cube of 5 is : 125
cube of 6 is : 216
*/