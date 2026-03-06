/*Given an array, find the longest sequence of consecutive numbers
Example: [100, 4, 200, 1, 3, 2] -> 1,2,3,4 (length 4)
Output: 4
*/

#include <iostream>
using namespace std;

void sortAs(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		for(int j = i+1; j < size; j++)
		{
			if(arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int longestSeqConNum(int arr[], int size)
{
	int maxLen = 0;
	int len;

	len = (size > 0)? 1 : 0;
	for(int i = 0, j = i+1; j < size; i++, j++)
	{
// 		cout << "diff: " << abs(arr[j] - arr[i]) << endl;
		if(abs(arr[j] - arr[i]) == 1)
		{
			len++;
// 			cout << "len: " << len << endl;
		}
		else
		{
			if(len > maxLen)
			{
				maxLen = len;
				// cout << "maxLen: " << maxLen << endl;
			}

			len = 1;
		}
	}

	if(len > maxLen)
	{
		maxLen = len;
// 		cout << "maxLen: " << maxLen << endl;
	}

	return maxLen;
}

int main()
{
	int num[] = {100, 4, 200, 1, 3, 2};

// 	int num[] = {5};
	int size = sizeof(num) / sizeof(num[0]);

	sortAs(num, size);
	int result = longestSeqConNum(num, size);

	cout << "Length: " << result << endl;


	return 0;
}
