#include <iostream>
using namespace std;

int MAX_SIZE = 1024;

void print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
	}
	
}

double average(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum / (double)size;
}

int main()
{
	int arr[1024] = {};
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << average(arr, n);


	return 0;
}