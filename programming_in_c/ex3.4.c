//A program that converts from 27 degrees Fahrenheit(F) to degrees Celsius (C).
#include <stdio.h>

int main(void)
{
	int fahrenheit = 27;
	float celsius = (float)(fahrenheit - 32) / 1.8;
	printf("27 degrees fahrenheit is %f degrees celsius.\n", celsius);
	return 0;
}
