#include <iostream>
using namespace std;

bool areEqual(const char* first, const char* second)
{
	if (*first != *second)
	{
		return false;
	}
	if (*first == '\0' && *second == '\0')
	{
		return true;
	}
	
		return areEqual(first + 1, second + 1);
	
}
int main()
{
	cout << boolalpha << areEqual("Hello", "Hello") << endl;
	cout << boolalpha << areEqual("Hello", "Nemi");

	return 0;
}