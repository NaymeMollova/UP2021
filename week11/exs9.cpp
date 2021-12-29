#include <iostream>
using namespace std;

bool swapCase( char* text)
{
	if (*text == '\0')
	{
		return 0;
	}
	if (*text >= 'a' && *text <= 'z')
	{
		*text -=  ('a' - 'A');
	}
	else if (*text >= 'A' && *text <= 'Z')
	{
		*text +=  ('a' - 'A');
	}
	return swapCase(text + 1);
}

int main()
{
	char text[] = "Nayme MollovA";
	swapCase(text);
	cout << text;

	return 0;
}