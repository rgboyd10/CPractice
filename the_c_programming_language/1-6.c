#include <stdio.h>

/*Verify that the expression getchar() != EOF is 0 or 1*/

main()
{
	int c;
	while((c = getchar()) != EOF)
	{
		printf("%d ", c != EOF);
		putchar(c);	
	}	
		printf("\n%d\n", c != EOF);
	
}
