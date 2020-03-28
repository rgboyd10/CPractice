//nested for loops
#include <stdio.h>

int main()
{
	int n, number,triangular_count, triangularNumber, counter;
	
	printf("How many triangular numbers do you want to be calculated?");
	scanf("%i",triangular_count);


	for(counter = 1; counter <= triangular_count; counter++)
	{
		printf("What triangular number do you want? ");
		scanf("%i", &number);
		
		triangularNumber = 0;
		for(n = 1; n <= number; n++)
		{
			triangularNumber += n;
		}

		printf("Triangular number %i is %i\n\n", number, triangularNumber);
	}

	return 0;
}
