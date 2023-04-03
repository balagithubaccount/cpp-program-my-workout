// Write a C program to print multiplication table using pointer.

#include <iostream>
using namespace std;

int main()
{
    int table, terms, sol, i;

    int *p_table, *p_term, *p_sol, *ptr;

    ptr = &i;

    p_table = &table, p_term = &terms, p_sol = &sol;

    cout << "Enter the table: ";
    cin >> *p_table;

    cout << "Enter the number of terms: ";
    cin >> *p_term;

    cout << "Table is:\n";

    for (*ptr = 1; *ptr <= *p_term; (*ptr)++)
    {
        *p_sol = (*p_table) * (i);

        cout << *p_table << " x " << *ptr << " = " << *p_sol << endl;
    }

    return 0;
}
/*
Sample Output:

Enter the table: 6
Enter the number of terms: 9
Table is:
6 x 1 = 6
6 x 2 = 12
6 x 3 = 18
6 x 4 = 24
6 x 5 = 30
6 x 6 = 36
6 x 7 = 42
6 x 8 = 48
6 x 9 = 54

*/
