#include <iostream>
using namespace std;

int main()
{
	double glueInML;
	int countWoodenStrips;
	int paintInML;
	cin >> glueInML >> countWoodenStrips >> paintInML;

	int glue = glueInML / 10;
	int woodenStrips = countWoodenStrips / 4;
	int paint = paintInML / 20;
			
	int maxProduct = 0;
	int glueForToy =  (glueInML - glue) / 3;
	int stripsForToy = (countWoodenStrips - woodenStrips) / 2;
    int paintForToy = (paintInML - paint) / 7;

	if (glue <= woodenStrips && glue <= paint)
	{
		maxProduct = glue;
		cout << maxProduct;
	
		
	}
	else if (woodenStrips <= glue && woodenStrips <= paint)
	{
		maxProduct = woodenStrips;
		cout << maxProduct;
	}
	else
	{
		maxProduct = paint;
		cout << maxProduct;
		
	}
	if (glueForToy <= stripsForToy && glueForToy <= paintForToy)
	{
		cout << "yes";
	}
	else if (stripsForToy <= glueForToy && stripsForToy <= paintForToy)
	{
		cout << "yes";
	}
	else
	{
		cout << "yes";
	}
	
	


	return 0;
}