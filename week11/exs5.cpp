#include <iostream>
using namespace std;

int fibonacci(int number)
{
	if (number == 0)
	{
		return number;
	}
	if (number == 1)
	{
		return number;
	}
	return (fibonacci(number - 1) + fibonacci(number - 2));
}
int main()
{
	cout << fibonacci(0) << endl;
	cout << fibonacci(1) << endl;
	cout << fibonacci(7) << endl;
	return 0;
}