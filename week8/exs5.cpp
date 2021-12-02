#include <iostream>
using namespace std;



int main()
{
	char arr[100];
	char symbol;
	cin.getline(arr, 100);
	cin >> symbol;

	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			arr[i] = arr[i] + ('a' - 'A');
		}
	}
	if (symbol >= 'A' && symbol <= 'Z')
	{
		symbol = symbol + ('a' - 'A');
	}
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == symbol)
		{
			arr[i] = '*';
		}
	}
	for (int i = 0; arr[i] != '\0'; i++)
	{
		cout << arr[i];
	}
	return 0;
}