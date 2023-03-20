//  Write a program in Cpp to print all permutations of a given string using pointers.

#include <iostream>
using namespace std;

int main()
{
    string s = "abcd";
    int n = 4;
    int count = 0;
    char *str;
    str = &s[0];

    //'str' stores the address of the first character ('a').

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                for (int k = 0; k < n; k++)
                {
                    if (k != i && k != j)
                    {
                        for (int l = 0; l < n; l++)
                        {
                            if (l != i && l != j && l != k)
                            {
                                count++;
                                cout << *(str + i) << *(str + j) << *(str + k) << *(str + l) << "\t";
                            }
                        }
                    }
                }
            }
            if (count % 6 == 0)
                printf("\n");
        }
    }

    cout << "\nTotal number of permutations is: " << count << "( "<< n << "! )\n";
}

/*
Sample Output:

abcd    abdc    acbd    acdb    adbc    adcb
bacd    badc    bcad    bcda    bdac    bdca
cabd    cadb    cbad    cbda    cdab    cdba
dabc    dacb    dbac    dbca    dcab    dcba


Total number of permutations is: 24( 4! )

*/