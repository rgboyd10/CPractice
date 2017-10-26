#include <stdio.h>

/*exercise 1-12 - write a program that prints its input one word per line.*/

main()
{
	int c;
	while((c = getchar()) != EOF)
	{
		if(c == ' ')
		{
			putchar('\n');
		}
		else
		{
			putchar(c);
		}
	}
}
