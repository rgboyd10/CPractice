#include <stdio.h>
#include <math.h>

int main(void)
{
	int x, y;
	printf("Please enter two numbers: ");
	scanf("%i %i", &x, &y);

	if(x % y == 0)
		printf("%i is evenly divisible by %i.\n", x, y);
	else
		printf("%i is not evenly divisible by %i.\n", x, y);

	return 0;
}

