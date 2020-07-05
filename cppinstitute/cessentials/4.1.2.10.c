#include <stdio.h>

int main()
{
	int fibonacci[10], lastlast = 1, last = 1, next = lastlast + last;
       	fibonacci[0] = lastlast;
	fibonacci[1] = last;
	printf("%i\n",lastlast);
	printf("%i\n",last);
	for(int x = 2; x < 10; x++)
	{
		fibonacci[x] = lastlast + last;
		lastlast = last;
		last = fibonacci[x];
		printf("%i\n", lastlast);
		printf("%i\n", last);
		printf("%i\n", fibonacci[x]);
	}
	
		return 0;
}
