#include <iostream>
using namespace std;

int main()
{
	

	for (double fahrenheit = 0;  fahrenheit <= 300; fahrenheit += 20)
	{
		double celsius = ((fahrenheit - 32) * 5) / 9;
		double kelvin = celsius + 273.15;
		cout << fahrenheit << "  " << celsius << "  " << kelvin << endl;
	}

	return 0;
}