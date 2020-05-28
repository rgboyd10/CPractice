#include <stdio.h>

int main()
{
	int multiplier, countera = 0, counterb = 0, num = 1;
	char ch[] = "*#";
	scanf("%i",&num);
	do
	{
		do
		{
			printf("*#");
			counterb++;
		}
		while(counterb <= num);
		
		printf("\n");
	}
	while(countera <= num);
	
	return 0;
}
