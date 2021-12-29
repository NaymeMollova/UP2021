#include <iostream>
#include <cmath>
using namespace std;

int minEl(int* arr, int size)
{
	if (size == 1)
	{
		return arr[0];
	}
	return min(arr[size - 1], minEl(arr, size - 1));
}
int main()
{
	int arr[5] = { 10,15,4,15,16 };
	std::cout << minEl(arr,5);
	return 0;
}