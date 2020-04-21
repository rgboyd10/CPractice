#include <stdio.h>
#include <math.h>

int p, result, x;

int prime()
{
	x= p - 1;
	result = 0;
	while(x > 1)
	{	
		if(p % x != 0)
			x--;
		else
			return result = 0;
	}

	return result = 1;	
}

int main(void)
{
	printf("Enter a number to find out if it is prime: ");
	scanf("%i", &p);
	result = prime();
	printf("Result: %i.\n1 means prime and 0 means not prime.\n",result);
}
