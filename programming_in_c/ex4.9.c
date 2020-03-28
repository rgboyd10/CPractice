/*
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
}*/

/*
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
*/

/*
#include <stdio.h>
#include <math.h>
int main()
{
	int counter = 1, factorial;
	printf("n	factorialN\n");
	while(counter <= 10)
	{
		factorial = counter;
		int x = counter - 1;
		 while(x > 0)
		{
			factorial *= x;
			x--;
		}
		printf("%i	%i\n", counter, factorial);
		counter++;
	}
	
	return 0;
}
*/

#include <stdio.h>

int main(void)
{
	int n = 0, two_to_the_n;
	
	printf("TABLE OF POWERS OF TWO\n\n");
	printf(" n	2 to the n\n");
	printf("---	---------------\n");
	
	two_to_the_n = 1;
	
	while(n <= 10)
	{
		printf("%2i	%i\n", n, two_to_the_n);
		two_to_the_n *=2;
		n++;
	}
	
	return 0;
}
