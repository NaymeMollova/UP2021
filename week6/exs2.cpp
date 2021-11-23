#include <iostream>
using namespace std;

bool isPrime(int number)
{
	if (number == 0 || number == 1)
		return false;
	else
	{
		for (int i = 2; i <= number/2; i++)
		{
			if (number % i == 0)
			{
				return false;
				break;
			}

		}
	}
	return true;
}
bool isTrue(int a, int b)
{
	if (isPrime(a) && isPrime(b) && a + 2 == b)
		return true;
	else
		return false;
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << isTrue(a,b);
	return 0;
}