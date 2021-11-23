#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	bool isPrime = true;
	for (int number = 2; number <= n; number++)
	{
		isPrime = true;
		for (int den = 2; den < number; den++)
		{
			if (number % den == 0)
			{
				isPrime = false;
				break;
			}
			
		}
		if (isPrime)
		{
			cout << number << " ";
		}
	}
	

	return 0;
}