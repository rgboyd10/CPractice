#include <stdio.h>

int main()
{
	int fibonacci[10], lastlast = 1, last = 1, next = lastlast + last;
 	printf("%i\n",lastlast);
	printf("%i\n",last);	
	for(int x = 2; x < 10; x++)
	{
		fibonacci[x] = next;
		printf("%i\n", next);
		lastlast = last;
		last = next;
	}
	
		return 0;
}
