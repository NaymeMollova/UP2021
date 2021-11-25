#include <iostream>
using namespace std;

const int MAX_SIZE = 1024;

void createArray(char arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}
void printArray(char arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int countSymbol(char arr[], int size, char symbol)
{
	int count = 0;

	for (int i = 0; i <size; i++)
	{
		if (arr[i] == symbol)
		{
			count++;
		}
	}
	return count;
}

int main()
{

	char arr[MAX_SIZE];
	int n;
	cin >> n;
	createArray(arr, n);
	printArray(arr, n);
	char symbol;
	cin >> symbol;
	cout << countSymbol(arr, n, symbol);
	return 0;
}