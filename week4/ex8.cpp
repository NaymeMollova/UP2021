#include <iostream>
using namespace std;

int main()
{

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int number;
		cin >> number;
	
		if (number % 2 == 0)
		{
			cout << "NO" << endl;
			break;
		}
		
	}
	cout << "YES";
	


	return 0;
}