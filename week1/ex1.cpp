#include <iostream>
using namespace std;

int main()
{
	//Проверете дали едно число е четно или нечетно
	//и изведете подходящо съобщение

	int number;
	cin >> number;

	if (number % 2 == 0)
	{
		cout << "Even";
	}
	else
	{
		cout << "Odd";
	}

	return 0;
}