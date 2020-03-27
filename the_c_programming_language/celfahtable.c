#include <stdio.h>

main()
{
	/*Prints a Celsius to Fahrenheit converted table*/

	float fahr, cel;
	int lower, upper, step;

	lower = 0;
	step = 20;		
	upper = 300;
	
	cel = lower;
	printf("Celsius to Fahrenheit conversion\n");
	while(cel <= upper)
	{
		fahr = cel * 1.8 + 32.0;
		printf("%3.0f \t %6.1f\n", cel, fahr);
		cel = cel + step;
	}
	
}
