// Write a Cpp program to find a pair with the given difference...

#include <iostream>
using namespace std;

int main()
{
  int size, i, j, giv_diff, diff, temp = 0;
  printf("Enter the array size: ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter the %d elements: ", size);
  for (i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter the difference: ");
  scanf("%d", &giv_diff);
  printf("\nThe Given array is: ");
  for (i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  for (i = 0; i < size; i++)
  {
    for (j = i + 1; j < size; j++)
    {
      if ((arr[i] - arr[j]) == giv_diff || (arr[j] - arr[i]) == giv_diff)
      {
        i = arr[i];
        j = arr[j];
        temp = 1;
        goto end;
      }
    }
  }
end:
  printf("\nThe given Difference is: %d\n", giv_diff);
  if (temp == 1)
  {
    printf("Tha pair are: (%d, %d)\n", i, j);
  }
  else
  {
    printf("\nNot pair found in the array.\n");
  }
  return 0;
}

/*
Output:

Enter the array size: 5
Enter the 5 elements: 1 15 39 75 92
Enter the difference: 53

The Given array is: 1 15 39 75 92
The given Difference is: 53
Tha pair are: (39, 92)
*/
