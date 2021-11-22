#include <iostream>
using namespace std;

int main()
{
	int n ;
	int number;
	int max = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> number;
		if (number < 0)
		{
			if (max == 0 || number > max)
			{
				max = number;
			}
		}
	}
	cout << max; 

	return 0; 
}