#include <stdio.h>

int main()
{
	char zero = '0';

	for(int x = 1; x <= 10; x++)
	{	
		if(x == 10)
		{	x = 0;
			printf("'%i' - '%c' is : %i\n", x, zero, x);
			x = 10;
		}		
		else
		{
			printf("'%i' - '%c' is : %i\n", x, zero, x);
		}
	} 

	return 0;
}
