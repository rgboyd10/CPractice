#include <stdio.h>
#include <math.h>

int main(void)
{
	int x, y;
	float z;
	printf("Please enter two numbers: ");
	scanf("%i %i", &x, &y);
	
	z = x/y;
	printf("The result of dividing the first number by the second number is %.3f.\n", z); 
	
	return 0;
}

