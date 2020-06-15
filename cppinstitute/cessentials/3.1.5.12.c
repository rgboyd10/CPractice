#include <stdio.h>

int getInput()
{
	int in;
	scanf("%i", in);
	if(in > 256)
		getInput();		
	
	return in;
}

int main()
{
	int num, hnibble, lnibble;
	printf("Please enter a number smaller than 256.");
	num = getInput();
		
	hnibble = ;
	lnibble = ;
	
	printf("H nibble: %i", hnibble);
	printf("L nibble: %i", lnibble);
	
	return 0;
}
