#include <stdio.h>
/*
expected output

the result is: 20
the small result is:5 
*/

int main()
{
	int xValue = 3;
	int yValue = 2;
	int result = xValue * yValue + 14;
	int smallResult = xValue + yValue;
	printf("the result is: %d\n", result);
	printf("the small result is: %d\n", smallResult);
	return 0;
}
