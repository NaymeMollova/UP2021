#include <iostream>
using namespace std;

int main()
{

	double sideA, sideB;
	cin >> sideA >> sideB;

	double all = (sideA * sideB) * 4;
	int paint = ceil(all / 3);
	cout << paint;

	return 0;
}