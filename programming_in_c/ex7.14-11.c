#include <stdio.h>
#include <math.h>

int prime(int p)
{
	int x = p-1;
	int result = 0;
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
	int p, result;
	printf("Enter a number to find out if it is prime: ");
	scanf("%i", &p);
	result = prime(p);
	printf("%i\n",result);
}
