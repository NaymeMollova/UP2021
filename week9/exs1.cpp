#include <iostream>
using namespace std;

void reverseArr(int *arr, unsigned size)
{
	for (int i = size - 1; i >=0; i--)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int arr[100] = { 1,2,3,4 };
	
	reverseArr(arr, 9);

	return 0;
}