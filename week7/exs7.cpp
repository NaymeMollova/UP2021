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
void changeL(char arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			arr[i] = (char)(arr[i] - 32 ) ;
			cout << arr[i];
		}
	
	}

}
void changeB(char  arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			arr[i] = (char)(arr[i] + 32);
			cout << arr[i];
			break;
		}
	}
}
int main()
{
	char arr[MAX_SIZE];
	int size;
	cin >> size;
	createArray(arr, size);
	printArray(arr, size);
	 changeL(arr, size);
	 changeB(arr, size);

	return 0;
}