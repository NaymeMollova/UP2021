#include <iostream>
using namespace std;
int recStrlen(const char* text)
{
	if (*text == '\0')
	{
		return 0;
	}
	return recStrlen(text + 1) + 1;   //text + 1 -> пойнтера сочи първия символ, + 1 -> следващия
	                                  // + 1 -> заради \0
	
}

int main()
{
	cout << recStrlen("Hello") << endl;
	cout << recStrlen("Mollova") << endl;
	cout << recStrlen("");

	return 0;
}