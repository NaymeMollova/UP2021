#include <iostream>
using namespace std;

const int MAX_SIZE = 1024;

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

void printRevArray(int arr[], int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int arr[MAX_SIZE];
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	printArray(arr, n);
	cout << endl;
	printRevArray(arr, n);

	return 0;
}