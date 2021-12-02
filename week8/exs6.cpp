#include <iostream>
using namespace std;

const int MAX_ROWS_SIZE = 64;
const int MAX_COLS_SIZE = 64;

void createMatrix(int matrix[MAX_ROWS_SIZE][MAX_COLS_SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> matrix[i][j];
		}
	}
	
}
void printMatrix(int matrix[MAX_ROWS_SIZE][MAX_COLS_SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
int primaryDiagFirstPart(int matrix[MAX_ROWS_SIZE][MAX_COLS_SIZE], int size)
{
	int product = 1;
	if (size % 2 == 0)
	{
		for (int i = 0; i < (size / 2); i++)
		{
			product *= matrix[i][i];
		}
	}
	else
	{
		int otherSize = ceil(((double)(size)) / 2);
		for (int i = 0; i < otherSize; i++)
		{
			product *= matrix[i][i];
		}
	}
	return product;
}
int secDiagFirstPart(int matrix[MAX_ROWS_SIZE][MAX_COLS_SIZE], int size)
{
	int product = 1;
	if (size % 2 == 0)
	{
		for (int i = 0; i < (size / 2); i++)
		{
			product *= matrix[size - 1 - i][ i];
		}
	}
	else
	{
		int otherSize = ceil(((double)(size)) / 2);
		for (int i = 0; i < otherSize; i++)
		{
			product *= matrix[size - 1 -i][i];
		}
	}
	return product;

}
int primaryDiagSecPart(int matrix[MAX_ROWS_SIZE][MAX_COLS_SIZE], int size)
{
	int sum = 0;
	if (size % 2 == 0)
	{
		for (int i = 0; i < (size / 2); i++)
		{
			sum += matrix[size - 1 - i][size - 1 - i];
		}
	}
	else
	{
		int otherSize = ceil(((double)(size)) / 2);
		for (int i = 0; i < otherSize; i++)
		{
			sum+= matrix[size - 1 - i][size - 1 - i];
		}
	}
	return sum;
}
int secDiagSecPart(int matrix[MAX_ROWS_SIZE][MAX_COLS_SIZE], int size)
{
	int sum = 0;
	if (size % 2 == 0)
	{
		for (int i = 0; i < (size / 2); i++)
		{
			sum += matrix[i][size - 1 - i];
		}
	}
	else
	{
		int otherSize = ceil(((double)(size)) / 2);
		for (int i = 0; i < otherSize; i++)
		{
			sum += matrix[i][size - 1 - i];
		}
	}
	return sum;
}

bool isTrue(int matrix[MAX_ROWS_SIZE][MAX_COLS_SIZE], int size)
{
	int sum = primaryDiagFirstPart(matrix,size) + secDiagFirstPart(matrix, size);
	int product = primaryDiagSecPart(matrix, size) * secDiagSecPart(matrix, size);

	if (sum != product)
	{
		return false;
	}
	else
	{
		return true;
	}
}


int main()
{
	int matrix[MAX_ROWS_SIZE][MAX_COLS_SIZE];
	int n;
	cin >> n;
	createMatrix(matrix, n);
	printMatrix(matrix, n);
	/*cout << primaryDiagFirstPart(matrix, n);
	cout << secDiagFirstPart(matrix, n);
	
	cout << primaryDiagSecPart(matrix, n);
	cout << secDiagSecPart(matrix, n);*/

	cout << isTrue(matrix,n);
	


	return 0;
}