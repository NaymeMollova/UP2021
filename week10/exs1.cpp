#include <iostream>
using namespace std;


int main()
{
	int countTeachers;
	cin >> countTeachers;
	int grades;
	
	int** matrix = new int* [countTeachers];
	for (int i = 0; i < countTeachers; i++)
	{
		cin >> grades;
		 matrix[i] = new int[grades + 1];
		 for (int j = 0; j < grades; j++)
		 {
			 cin >> matrix[i][j];
		 }
		 matrix[i][grades] = -1;
	}
	for (int i = 0; i < countTeachers; i++)
	{
		for (int j = 0; matrix[i][j] != -1; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < countTeachers; i++)
	{
		delete[] matrix[i];

	}
	delete[] matrix;
	return 0;
}