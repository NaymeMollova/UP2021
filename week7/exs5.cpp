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
void productInArray(int arr[], int size)
{
	int count = 0;
	bool isTrue = true;
	for (int i = 0; i < size; i++)
	{
		
		int product = 1;
		while (arr[i] != 0)
		{
			int lastDigit = arr[i] % 10;
			product *= lastDigit;
			arr[i] /= 10;
		}
		if (product <= 9)
		{
			count++;
			isTrue = true;
		}
	}
	if (isTrue)
	{
		cout << "Count is: " << count << endl;
	}
	else
	{
		cout << false;
	}
}

int main()
{
	int arr[MAX_SIZE];
	int n;
	cin >> n;
	createArray(arr, n);
	printArray(arr, n);
	productInArray(arr, n);

	return 0;
}