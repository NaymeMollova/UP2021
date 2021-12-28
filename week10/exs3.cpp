#include <iostream>
using namespace std;

int* copyArr(int* arr, int size)
{
	int* copy = new int[size];
	for (int i = 0; i < size; i++)
	{
		copy[i] = arr[i];
	}
	return copy;
}

int main()
{
	int arr[4] = { 1,2,3,9 };
	int* p = copyArr(arr, 4);
	for (int i = 0; i < 4; i++)
	{
		cout << p[i] << " ";

	}
	delete[] p;

	return 0;
}