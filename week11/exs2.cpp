#include <iostream>
using namespace std;

int reverse(int  number)
{
	int sum =0 ;
	int temp;
	if (number < 10)
	{
		return number;
	}
	else
	{
		cout << number % 10;
		return reverse(number / 10);

	}
	
}
int main()
{
	cout << reverse(58547);

	return 0;
}