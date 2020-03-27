#include <stdio.h>

/*Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.*/

main()
{

int c, lastc;
lastc = '-';

	while((c = getchar()) != EOF)
	{
		if(c == ' ')
		{
			if(lastc != ' ')	
			putchar(c);
		}
		if(c != ' ')
		putchar(c);

		lastc = c;
	}

}

