#include <iostream>
using namespace std;

int ÀbsoluteValue(int number)
{
	if (number < 0)
		return -number;
	else
		return number;
}
double Pow(double a, int n)
{
	int product = 1;
	if (n < 0)
		return -1;
	for (int i = 0; i < n; i++)
	{
		product = product * a;
	}
	return product;
}

double Min(double num1, double num2)
{
	if (num1 < num2)
		return num1;
	else
		return num2;
}
double Max(double num1, double num2)
{
	if (num1 < num2)
		return num2;
	else
		return num1;
}
double minOfThree(double num1, double num2, double num3)
{
	return Min(Min(num1, num2), num3);
}
double maxOfThree(double num1, double num2, double num3)
{
	return Max(Max(num1, num2), num3);
}
bool isAlpha(char symbol)
{
	if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z'))
		return true;
	else
		return false;
}
bool isDigit(char symbol)
{
	if (symbol >= '0' && symbol <= '9')
		return true;
	else
		return false;
}
int main()
{
	/*double a;
	cin >> a;
	int n;
	cin >> n;
	cout << Pow(a, n);*/

	/*int n;
	cin >> n;
	cout << ÀbsoluteValue(n);*/
	
	/*double num1, num2;
	cin >> num1 >> num2;
	cout << Min(num1, num2);
	cout << Max(num1, num2);*/

	/*double num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	cout << minOfThree(num1, num2, num3);
	cout << maxOfThree(num1, num2, num3);*/

	/*char symbol;
	cin >> symbol;
	cout << isAlpha(symbol);*/

	/*char symbol;
	cin >> symbol;
	cout << isDigit(symbol);*/

	return 0;
}