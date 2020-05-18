#include <stdio.h>
#include <math.h>


int main()
{
	float startValue = 100.0;
	float interestRate = 0.015;
	float firstYearValue;
	float secondYearValue;
	float thirdYearValue;
	
	firstYearValue = (startValue * 1.0 * 0.015) + startValue;
	secondYearValue = (firstYearValue * 1.0 * 0.015) + firstYearValue;
	thirdYearValue = (secondYearValue * 1.0 * 0.015) + secondYearValue;

	printf("After first year: %f\n", firstYearValue);
	printf("After second year: %f\n", secondYearValue);
	printf("After third year: %f\n", thirdYearValue);
	return 0;
}
