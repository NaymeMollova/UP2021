#include <iostream>
using namespace std;

int main()
{
	//ax^2 + bx + c = 0
	int a, b, c;
	cin >> a >> b >> c;
	double x1, x2;

	int d = b * b - 4 * a * c;
	if (d > 0)
	{
		 x1 = (-b + sqrt(d))/ 2*a;
		 x2 = (-b - sqrt(d))/2*a ;
		cout << x1 << " " << x2;
	}
	else if (d < 0)
	{
		cout << "There are no real roots";
	}
	else
	{
		x1 = -b / (2 * a);
		x2 = -b / (2 * a);
		cout << x1 << " " << x2;

	}

	return 0;
}