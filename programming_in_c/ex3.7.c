#include <stdio.h>
#include <math.h>

int main(void)
{
	long double x = (3.31*pow(10.0,-8.0)*2.01*pow(10.0,-7.0))/(7.16*pow(10.0,-6.0)+2.01*pow(10.0,-8.0));
	printf("%LG\n",x);
}
