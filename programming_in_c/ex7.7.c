#include <stdio.h>
#include <math.h>

long int x_to_the_n(int x, int n)
{
	long int result;
	result = pow(x,n);
	return result;
}

int main(void)
{
	int x, n;
	printf("Please enter two integers: ");
	scanf("%i %i", &x, &n);
	printf("%i raised to the power of %i is %li.\n", x, n, x_to_the_n(x, n));
	return 0;
}
