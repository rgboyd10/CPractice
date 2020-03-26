#include <stdio.h>
#include <math.h>
int main()
{
	int counter = 1, factorial;
	printf("n	factorialN\n");
	while(counter <= 10)
	{
		factorial = counter;
		for(int x = counter - 1; x > 0; x--)
		{
			factorial *= x;
		}
		printf("%i	%i\n", counter, factorial);
		counter++;
	}
	
	return 0;
}
