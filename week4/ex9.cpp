#include <iostream>
using namespace std;

int main()
{

	int n;
	cin >> n;
	while(n != 0)
	{
		
		if (n % 10 == 1)
		{
			cout << "YES" << endl;
			break;
		}
		
		n = n/ 10;
	}

	return 0;
}