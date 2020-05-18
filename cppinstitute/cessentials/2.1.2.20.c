#include <stdio.h>

int main()
{
	int xValue = 5;
	int yValue = 3;
	int result = xValue * yValue % 14 + yValue;
	int smallResult = 10 - yValue;
	printf("the result is: %i \n", result);
	printf("the small result is: %i \n", smallResult);
	return 0;
}
