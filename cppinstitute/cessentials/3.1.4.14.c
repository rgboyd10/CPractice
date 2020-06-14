#include <stdio.h>

/*
 * for whatever input
example num = 3
*#
*#*#
*#*#*#
	print 1
	skip a line
	print 2
	skip a line
	print 3
	skip a line 
 * */

int main()
{
	int countera = 0, counterb = 1, num = 1;
	char ch[] = "*#";
	scanf("%i",&num);	
	if(num > 20)	
	{
		num = 20;
	}		
	
	if(num <= 1)
	{
		printf("*#\n");
		return 0;
	}	

	do
	{
		do
		{
			printf("*#");
			countera++;
		}
		while(countera < counterb);
		
		printf("\n");
		countera = 0;	
		counterb++; 
	}
	while(counterb <= num);
	
	return 0;
}
