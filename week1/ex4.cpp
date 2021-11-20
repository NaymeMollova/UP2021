#include <iostream>
using namespace std;

int main()
{

	int num1, num2;
	cin >> num1 >> num2;
	char symbol;
	cin >> symbol;


	switch (symbol)
	{
	case '+':
		cout << num1 + num2;
		break;
	case '-':
		cout << num1 - num2;
		break;
	case '*':
		cout << num1 * num2;
		break;
	case '/':
		if (num2 == 0)
		{
			cout << "error";
		}
		else
		{
			cout << num1 / num2;
		}
		break;
	default:
		cout << "Wrong input!";
		break;
	}

	return 0;
}