#include <iostream>
using namespace std;

int pow(int a, int n)
{
	int product = 1;
	for (int i = 0; i < n; i++)
	{
		product = product * a;
	}
	return product;
}

int main()
{
	int a, n;
	int sum = 1;
	cin >> a >> n;
	for (int i = 1; i <= n; i++)
	{
		sum = sum + pow(a, i);
	}
	cout << sum;

	return 0;
}