#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;
	int firstDigit = number % 10;
	int secondDigit = (number / 10) % 10;
	int thirdDigit = (number / 100) % 10;
	int product = firstDigit * secondDigit * thirdDigit;
	int sum = firstDigit + secondDigit + thirdDigit;
	if (number < 1000 && number > 99)
	{

	
		if (product < 1000 && product > 99)
		{
			cout << "YES ";
			cout << product - sum;
		}
		else
		{
			cout << "NO ";
			cout << product;
		}
	}
	else
	{
		cout << "Wrong input!";
	}

	

	return 0;
}