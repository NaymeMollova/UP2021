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
void rowSum(int arr[MAX_ROWS_SIZE][MAX_COLS_SIZE], int rows, int cols)
{
	
	for (int i = 0; i < rows; i++)
	{
		int sum = 0;
		for (int j = 0; j < cols; j++)
		{
			sum += arr[i][j];
		}
		cout << i + 1 << "Row sum: " << sum <<  endl;
	}
}
void colsSum(int arr[MAX_ROWS_SIZE][MAX_COLS_SIZE], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		int sum = 0;
		for (int j = 0; j < cols; j++)
		{
			sum += arr[j][i];
		}
		cout << i + 1 << " Cols sum: " << sum << endl;
	}
}
void primaryDiagSum(int arr[MAX_ROWS_SIZE][MAX_COLS_SIZE], int rows)
{
	int sum = 0;
	for (int i = 0; i < rows; i++)
	{
		
			sum += arr[i][i];
		
	}
	cout << sum;
}
void secDiagSum(int arr[MAX_ROWS_SIZE][MAX_COLS_SIZE], int rows)
{
	int sum = 0;
	for (int i = 0; i < rows; i++)
	{
		sum += arr[i][rows - 1 - i];
	}
}



int main()
{
	int arr[MAX_ROWS_SIZE][MAX_COLS_SIZE];
	int rows, cols;
	cin >> rows >> cols;
	createArray(arr, rows, cols);
	printArray(arr, rows, cols);
    rowSum(arr, rows, cols);
	colsSum(arr, rows, cols);
	primaryDiagSum(arr, rows);
	secDiagSum(arr, rows);

	return 0;
}