#include <stdio.h>

/*
 * for whatever input
 %!
 %!%!
 %!%!%!

	print 1
	skip a line
	print 2
	skip a line
	print 3
	skip a line 
 * */

int main()
{
	int multiplier, countera = 0, counterb = 0, num = 1;
	char ch[] = "*#";
	scanf("%i",&num);
	counterb = num;
	do
	{
		if(countera >= counterb)
			break;

		do
		{
			printf("*#");
			
			countera++;
			if(countera > countera - 1)
				printf("\n");

		}
		while(countera <= counterb);
		
		counterb++; 
	}
	while(counterb <= num);
	
	return 0;
}
