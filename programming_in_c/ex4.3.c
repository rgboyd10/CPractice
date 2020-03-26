//A program to generates a table of triangular numbers using a formula. Each number is the fifth triangular number between 5 and 50.

#include <stdio.h>
#include <math.h>
int main()
{
	int n = 5, y;
	printf("n	triangularN\n");
	while(n <= 50)
	{
		y = n*(n+1) / 2;
		printf("%i	%i\n",n,y);
		n+=5;
	}
	return 0;
}
