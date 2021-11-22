#include <iostream>
using namespace std;

int main()
{

	int number;
	cin >> number;
	bool isEven = (number >= 5) && (number <= 20) && (number % 2 == 0);
	cout << std::boolalpha << isEven;

	return 0;
}