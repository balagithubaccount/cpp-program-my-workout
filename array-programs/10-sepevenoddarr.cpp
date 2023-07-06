// Write a Cpp program to to separate odd and even integers in separate arrays.

#include <iostream>
using namespace std;

int main()
{
  int num, iter, counteven = 0, countodd = 0;

  cout << "Enter the total numbers: ";
  cin >> num;

  int mainarr[num], evenarr[num], oddarr[num];
  cout << "Enter the " << num << " values: \n";
  for (iter = 0; iter < num; iter++)
  {
    cout << "Enter element " << iter << ": ";
    cin >> mainarr[iter];

    if (mainarr[iter] % 2 == 0)
    {
      evenarr[counteven] = mainarr[iter];
      counteven++;
    }
    else
    {
      oddarr[countodd] = mainarr[iter];
      countodd++;
    }
  }
  cout << "The Even Elements are:\n";

  for (iter = 0; iter < counteven; iter++)
    cout << evenarr[iter] << " ";

  cout << "\nThe Odd Elements are:\n";
  for (iter = 0; iter < countodd; iter++)
    cout << oddarr[iter] << " ";

  cout << "\n";

  return 0;
}

/*
Output:

Enter the total numbers: 5
Enter the 5 values:
Enter element 0: -1
Enter element 1: -9
Enter element 2: -3
Enter element 3: -2
Enter element 4: 6
The Even Elements are:
-2 6
The Odd Elements are:
-1 -9 -3
*/