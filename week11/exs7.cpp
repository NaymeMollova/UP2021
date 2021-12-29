#include <iostream>
using namespace std;

int binary(int number)
{
	if (number == 0)
	{
		return number;
	}
	return (number % 2 + (10 * (binary(number / 2))));
}

int main()
{
	cout << binary(0) << endl;
	cout << binary(1) << endl;
	cout << binary(3) << endl;
	cout << binary(7) << endl;

	return 0;
}