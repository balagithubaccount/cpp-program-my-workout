// To print array elements using for-each.

#include <iostream>
using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i : array)
    {
        cout << i << " ";
    }

    return 0;
}

/*
Output:

1 2 3 4 5 6 7 8 9 10
*/