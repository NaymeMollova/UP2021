#include <iostream>
using namespace std;

int* half(const int* arr, int size)
{
	int* other = new int[size / 2];
	for (int i = 0; i < size / 2; i++)
	{
		other[i] = arr[i];
		
	}
	return other;
}

int main()
{
	int arr[6] = { 1,2,3,4,5,6 };
	int* halfArr = half(arr, 6);
	delete[] halfArr;

	return 0;
}