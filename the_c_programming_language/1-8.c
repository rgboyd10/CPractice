#include <stdio.h>

/*Write a program to count blanks, tabs and new lines.*/

main()
{
	int c, nl, nt, nb;

	while((c = getchar()) != EOF)
	{
		if(c == '\n')
		nl++;
		else if(c == '\t')
		nt++;		
		else if(c == ' ')
		nb++;
	}
	
	printf("::New Lines = %d\n::Tabs = %d\n::Blanks = %d\n", nl, nt, nb);
}
