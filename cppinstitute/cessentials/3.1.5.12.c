#include <stdio.h>

int getInput()
{
	int in;
	scanf("%i", &in);
	if(in > 256)
		getInput();		
	
	return in;
}

int main()
{
	int num, hnibble, lnibble, numbytes;
	printf("Please enter a number smaller than 256.\n");
	num = getInput();
	numbytes = num % 4;	
	hnibble = (numbytes & 0x0F) << 4;
	lnibble = (numbytes & 0xF0) >> 4;
	
	printf("H nibble: %i\n", hnibble);
	printf("L nibble: %i\n", lnibble);
	
	return 0;
}
