/*A program to generate the first 15 Fibonacci numbers revised*/
#include <stdio.h>

int main(void)
{
	int oneprev = 1, twoprev = 0, current = twoprev + oneprev;
	printf("%i, %i, ", twoprev, oneprev);
	for(int x = 1; x <= 15; x++)
	{
		/*0, 1, 1, 2, 3, 5...*/
		printf("%i, ", current);
		current += oneprev;
		oneprev = current - oneprev;
	}	
	printf("\n");
	return 0;
}
