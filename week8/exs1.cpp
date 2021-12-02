#include <iostream>
using namespace std;


const int MAX_ROWS_SIZE = 64;
const int MAX_COLS_SIZE = 64;

void createArray(int arr[MAX_ROWS_SIZE][MAX_COLS_SIZE], int rows,int cols )
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
void changeArray(int arr[MAX_ROWS_SIZE][MAX_COLS_SIZE], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] + 10 << " ";
		}
		cout << endl;
	}
}

int main()
{
	int arr[MAX_ROWS_SIZE][MAX_COLS_SIZE];
	int rows, cols;
	cin >> rows >> cols;
	createArray(arr, rows, cols);
	printArray(arr, rows, cols);
	changeArray(arr, rows, cols);

	return 0;
}