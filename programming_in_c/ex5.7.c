//Program to genearte a table of prime numbers revised
//todo:instructions on pg 124
#include <stdio.h>

int main(void)
{
	int p, d;
	_Bool isPrime;
	
	for(p = 2; p % 2 != 0 && p <= 50; p++)
	{
		isPrime = 1;
		
		for(d = 2; d < p; d++)
			if(p % d == 0)
				isPrime = 0;
	
			if(isPrime != 0)
				printf("%i ", p);
	}
	
	printf("\n");
	return 0;
}
