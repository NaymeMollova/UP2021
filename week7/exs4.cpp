#include <iostream>
using namespace std;

const int MAX_SIZE = 64;

void createArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}
void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

bool isTrue(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == arr[size - 1 - i])
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

int main()
{
	int arr[MAX_SIZE];
	int n;
	cin >> n;
	createArray(arr, n);
	printArray(arr, n);
	cout << isTrue(arr, n);

	return 0;
}