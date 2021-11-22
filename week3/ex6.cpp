#include <iostream>
using namespace std;

int main()
{
	unsigned int  n;
	cin >> n;
	char a;
	char b;
	cin >> a >> b;

	for (int i = 1; i <= n - 1; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j < i)
			{
				cout << a << " ";
			}
			else
			{
				cout << b << " ";
			}
			
		}
		cout << endl;
	}

	return 0;
}