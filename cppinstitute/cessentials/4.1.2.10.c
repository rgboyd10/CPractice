#include <stdio.h>

int main()
{
	int fibonacci[10], lastlast = 1, last = 1, next = lastlast + last;
 	fibonacci[0] = 1;
	fibonacci[1] = 1;
	printf("%i\n",lastlast);
	printf("%i\n",last);

	//prints the first ten numbers from the Fibonacci sequence	
	for(int x = 2; x < 10; x++)
	{
		fibonacci[x] = next;
		printf("%i\n", next);
		lastlast = last;
		last = next;
		next = lastlast + last;
	}

	//print only the odd numbers of the array
	for(int x = 0; x < 10; x++)
	{
		if(x % 3 == 0)
		{
			printf("%i\n",fibonacci[x]);
		}
	}

	//print only the even numbers of the array	
	for(int x = 0; x < 10; x++)
	{
		if(x % 2 == 0)
		{
			printf("%i\n",fibonacci[x]);
		}
	}
	
	return 0;
}
