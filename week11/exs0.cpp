#include <iostream>
using namespace std;

int sumOfDigits(int number)
{
	if (number < 10)
	{
		return number;
	}
	if (number == 0)
	{
		return number;
	}
	return (number % 10) + sumOfDigits(number / 10);
}
int main()
{
	cout << sumOfDigits(5) << endl;
	cout << sumOfDigits(59) << endl;
	cout << sumOfDigits(0);
	return 0;
}