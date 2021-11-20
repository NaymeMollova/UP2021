#include <iostream>
using namespace std;

int main()
{

	char symbol;
	cin >> symbol;


	if (symbol >= 'a' && symbol <= 'z')
	{
		cout  << (char)(symbol - 32);
	}
	else if (symbol >= 'A' && symbol <= 'Z')
	{
		cout << (char)(symbol + 32);
	}
	else if (symbol >= '0' && symbol <= '9')
	{
		cout << (symbol - '0') * (symbol - '0');
	}
	else
	{
		cout << "Another symbol";
	}
	

	return 0;
}