#include<iostream>
using namespace std;

int main()
{
	int n = 0;

// again:

	cin >> n;

	int n_of_row = n * 2 - 1;
	int temprow;
	int tempInput;

	for(int i = 0; i <= n_of_row/2; i++)
	{
		tempInput = n;
		temprow = i;

		cout << tempInput << " ";

		for(int j = 1; j <= n_of_row / 2; j++)
		{
			if(temprow > 0)
			{
				tempInput--;
				temprow--;
			}
			cout << tempInput << " ";
		}
		temprow = i;
		for(int j = 1; j <= n_of_row / 2; j++)
		{

			if(temprow >= n_of_row/2)
			{
				tempInput++;
			}

			cout << tempInput << " ";
			temprow++;
		}

		cout << endl;
	}

	for(int i = 1; i <= n_of_row/2; i++)
	{
		tempInput = n;
		temprow = i;

		cout << tempInput << " ";

		for(int j = 1; j <= n_of_row / 2; j++)
		{
			if(temprow > 0 && temprow != n_of_row/2)
			{
				tempInput--;
				temprow--;
			}
			cout << tempInput << " ";
		}
		temprow = i;
		for(int j = 1; j <= n_of_row / 2; j++)
		{

			if(temprow >= n_of_row/2)
			{
				if(i != n_of_row/2)
					tempInput++;
			}

			cout << tempInput << " ";
			temprow++;
		}


		cout << endl;
	}

// 	int rep = 0;
// 	cout << "\n again for (1): " ;
// 	cin >> rep;

// 	if(rep == 1)
// 		goto again;


	return 0;
}
