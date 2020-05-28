#include <stdio.h>

int main()
{
	int a, b, sum;
	do
	{
			scanf("%i %i",&a, &b);
			if((b == 99 && a == 0) || (a == 99  && b == 0))
			{
				sum = b + a;
				printf("Sum: %i\n", sum);
				printf("Finish.\n");
				break;
			}

			sum = a + b;
			printf("Sum: %i\n", sum);
			sum = 0;
			
	}	
	while(a != 0 && b != 0); 
		
	return 0;
}
