#include <iostream>
using namespace std;

int *pointerToFindFirstElement(int* arr, int size, int element)
{
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) == element)
		{
			return (arr + i);
		}
	}
	return nullptr;
}

int main()
{
	int arr[100] = { 1,2,3,4,5 };
	cout << pointerToFindFirstElement(arr, 4, 2);

	return 0;
}