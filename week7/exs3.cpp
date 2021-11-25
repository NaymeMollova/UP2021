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
}
int findElement(int arr[], int size, int element)
{
	int count = 0;
	bool isFind = true;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == element)
		{
			count++;
			isFind = true;
		}
	}
	if (isFind)
	{
		cout << "Count is: " << count << endl;
		return true;
	}
	else
	{
		return false;
	}


}
void position(int arr[], int size, int element)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == element)
		{
			cout << i << " ";
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
	cout << endl;
	int element;
	cin >> element;
	cout << findElement(arr, n, element);
	position(arr, n, element);


	return 0;
}