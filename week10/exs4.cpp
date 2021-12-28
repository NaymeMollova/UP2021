#include <iostream>
#include <cmath>
using namespace std;

char* numToText(int number)
{
	int size = floor(log10(number) + 1);     //!!!!!!
	char* string = new char[size + 1];

	for (int i = size - 1; i >= 0; i--)
	{
		string[i] = number % 10 + '0';
		number /= 10;
	}
	string[size] = '\0';

	return string;
}


int main()
{
	int number;
	cin >> number;

	char* string = numToText(number);
	cout << string;
	delete[] string;
	return 0;
}