#include <stdio.h>

/*
 * for whatever input
 %!
 %!%!
 %!%!%!
 * */

int main()
{
	int multiplier, countera = 0, counterb = 0, num = 1;
	char ch[] = "*#";
	scanf("%i",&num);
	counterb = num;
	do
	{
		do
		{
			printf("*#");
			counterb--;
		}
		while(counterb > 0);
		printf("\n");
		
		countera++; 
	}
	while(countera <= num);
	
	return 0;
}
