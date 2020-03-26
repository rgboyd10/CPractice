//A program to generate and display a table of n and n^2 for integer values ranging from 1 to 10.

#include <stdio.h>
#include <math.h>
int main()
{
	int x = 1, y;
	printf("n	n^2\n");
	while(x <= 10)
	{
		y = pow(x,2);
		printf("%i	%i\n",x,y);
		x++;
	}
	return 0;
}
