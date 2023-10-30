
// Write a Cpp program to check whether two given strings are an anagram.

#include <iostream>
#include <string.h>
using namespace std;

char str1[10], str2[10];

int Anagram(char str1[], char str2[]);
int main()
{
   int temp;
   cout << "Enter the first string: ";
   cin >> str1;
   cout << "Enter the second string: ";
   cin >> str2;
   temp = Anagram(str1, str2);
   if (temp == 1)
   {
      cout << "\n"
           << str1 << " and " << str2 << " are Anagram.\n";
   }
   else
   {
      cout << "\n"
           << str1 << " and " << str2 << " are not Anagram.\n";
   }
   return 0;
}

int Anagram(char str1[], char str2[])
{
   int i, j;
   int len1 = strlen(str1), len2 = strlen(str2);
   int checked_index[100], k = 0, count = 0;
   if (len1 != len2)
   {
      return 0;
   }
   for (i = 0; i < len1; i++)
   {
      for (j = 0; j < len1; j++)
      {
         for (int l = 0; l < k && i != 0; l++)
         {
            if (checked_index[l] == j)
            {
               j++;
            }
         }
         if (str1[i] == str2[j])
         {
            checked_index[k] = j;
            k++;
            count++;
            break;
         }
      }
   }
   if (count == len1)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}
/*
Sample Output:1

Enter the first string: spare
Enter the second string: pears

spare and pears are Anagram.

Sample Output:2

Enter the first string: tall
Enter the second string: all

tall and all are not Anagram.
*/
