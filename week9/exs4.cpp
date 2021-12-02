#include <iostream>
using namespace std;

int *minSum(int *arr, int sizeArr, int *otherArr, int sizeOtherArr)
{
	int sum = 0;
	int otherSum = 0;
	int* ptr = nullptr;
	for (int i = 0; i < sizeArr; i++)
	{
		sum += *(arr + i);
	}
	for (int i = 0; i < sizeOtherArr; i++)
	{
		otherSum += *(otherArr + i);
	}
	if (sum > otherSum)
	{
		ptr = otherArr;
	}
	else
	{
		ptr = arr;
	}
	return ptr;
}

int main()
{

	int arr[] = { 1,5,4,74,6,1,3 };
	int otherArr[] = { 1,2,3,4,5,1,5 };

	cout << minSum(arr,7, otherArr, 7);
	


	return 0;
}