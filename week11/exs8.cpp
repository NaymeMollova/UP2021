#include <iostream>
using namespace std;

void evaluate(const char* text, int numbers, int large, int small)
{
	if (*text == '\0')
	{
		cout << "Numbers: " << numbers << endl;
		cout << "Large: " << large << endl;
		cout << "Small: " << small << endl;
		return;
	}
	if (*text >= '0' && *text <= '9')
	{
		return evaluate(text + 1, numbers + 1, large, small);
		
	}
	else if (*text >= 'a' && *text <= 'z')
	{
		return evaluate(text + 1, numbers, large, small + 1);
	}
	else if (*text >= 'A' && *text <= 'Z')
	{
		return evaluate(text + 1, numbers, large+1, small);
	}
	else
	{
		return evaluate(text + 1, numbers, large, small);
	}
	
}

int main()
{
	evaluate("Nayme Mollova 00", 0, 0, 0);
		 cout << endl;
		 evaluate("3 Doors Down", 0, 0, 0);
		 cout << endl;
	return 0;
}