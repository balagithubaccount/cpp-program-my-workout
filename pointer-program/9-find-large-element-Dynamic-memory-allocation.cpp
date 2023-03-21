//  Write a program in Cpp to find the largest element using Dynamic Memory Allocation.

#include <iostream>
using namespace std;

void get_element_fint_large_element(int *ptr, int size)
{
    int large = -1;
    if (ptr == NULL)
    {
        cout << "Memory is not allocated. " << endl ;
        exit(0);
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Element " << i + 1 << ": ";
            cin >> ptr[i];

            if(large < ptr[i])
            {
                large = ptr[i];
            }
        }
        cout << "Largest Element is: " << large << endl;
    }
}
int main()
{
    int n;
    cout << "Input total number of elements: ";
    scanf("%d", &n);


    get_element_fint_large_element(new int(n), n);
}

/*
Sample Output:

Input total number of elements: 9
Element 1: 1
Element 2: 8
Element 3: 0
Element 4: 2
Element 5: 5
Element 6: 3
Element 7: 9
Element 8: 4
Element 9: -2
Largest Element is: 9

*/