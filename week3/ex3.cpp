#include <iostream>
using namespace std;


int main()
{
	int number;
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> number;
		if (number >= 10 && number <= 5555)
		{
			sum += number;
		}
	}
	cout << sum;
	return 0;
}