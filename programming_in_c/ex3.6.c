#include <stdio.h>
#include <math.h>

int main(void)
{
	float x = 2.55;
	float y = 3 * pow(x,3) - 5 * pow(x,2) + 6;
	printf("%f\n", y);
	return 0;
}
