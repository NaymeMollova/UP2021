#include <iostream>
using namespace std;

const int MAX_ROWS_SIZE = 64;
const int MAX_COLS_SIZE = 64;

void createArray(int arr[MAX_ROWS_SIZE][MAX_COLS_SIZE], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> arr[i][j];
		}
	}
}
void printArray(int arr[MAX_ROWS_SIZE][MAX_COLS_SIZE], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
int maxInArray(int arr[MAX_ROWS_SIZE][MAX_COLS_SIZE], int rows, int cols)
{
	int max = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	return max;
	
}
int minInArray(int arr[MAX_ROWS_SIZE][MAX_COLS_SIZE], int rows, int cols)
{
	int min = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}
int main()
{
	int arr[MAX_ROWS_SIZE][MAX_COLS_SIZE];
	int rows, cols;
	cin >> rows >> cols;
	createArray(arr, rows, cols);
	printArray(arr, rows, cols);
	cout << "Max element: " << maxInArray(arr, rows, cols) << endl;
	cout << "Min element: " << minInArray(arr, rows, cols);

	return 0;
}