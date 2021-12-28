#include <iostream>
using namespace std;

void newSize( int*& arr, int &size, int newS)
{
	int* newArr = new int[newS];
	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];   //copy

	}
	arr = newArr;
	size = newS;
}

int main()
{
	
	int size;
	cin >> size;
	int* arr =new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
       newSize(arr, size, size + size);
	for (int i = 3; i < size; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	delete[] arr;
	
	
	return 0;
}