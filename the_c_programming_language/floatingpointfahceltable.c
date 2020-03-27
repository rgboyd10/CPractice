#include <stdio.h>

/* print Fahrenheit-Celsiius table
 * for fahr = 0, 20, ...., 300; floating-point version*/

float main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;		/*lower limit of temperature scale*/
	upper = 300;		/*upper limit */
	step = 30;		/*step size*/

	fahr = lower;
	while(fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\b", fahr, celsius);
		fahr = fahr + step;
	}
}
