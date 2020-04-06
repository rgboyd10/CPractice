#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
	int range[150];
	bool isprime = false;

	for(int x = 1; x <= 150; x++)
	{
		for(int y = x; y >= 1; y--)
		{	
			isprime = false;
			
			if(x % y != 0)
			{
				printf("%i is prime\n", y);
				isprime = true;	
				break;
			}

			if(isprime == true)
				break;
		}
	}
	
	return 0;
}
