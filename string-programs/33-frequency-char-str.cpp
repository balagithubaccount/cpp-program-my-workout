// Write a Cpp programming to count of each character in a given string.

#include <iostream>
#include <string>
using namespace std;

void count_each_char(string str, int n)
{
   int i, j, count, temp, k=0;
   string store;

   for(i=0; i<n; i++)
   {
      temp = 1, count = 0;
      for(j=0; j<i; j++)
      {
        if(str[i] == store[j])
        {
            temp=0;
        }
      }
      if(temp == 1 && str[i]!= ' ')
      {
        for(j=0; j<n; j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        cout << str[i] << "  -  " << count << endl;
        store[k++]= str[i];
      }
   }
}
int main()
{
    string str;
    cout << "Input a string: ";
    getline(cin, str);
    
    cout << "\nThe count of each character in the string \"" << str << "\" is\n\n";
    count_each_char(str, str.length());

    return 0;
}

/*
Sample Output:

Input a string: google.com

The count of each character in the string "google.com" is

g  -  2
o  -  3
l  -  1
e  -  1
.  -  1
c  -  1
m  -  1

*/