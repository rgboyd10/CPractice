#include <stdio.h>

signed int getInput()
{
	int in;
	scanf("%i", &in);
	return in;
}

int main()
{
	int num, hnibble, lnibble;
	printf("Please enter a number smaller than 256.\n");
	num = getInput();
	hnibble = (num >> 4) & 0x0F;
	lnibble = (num) & 0x0F;
	
	printf("H nibble: %i\n", hnibble);
	printf("L nibble: %i\n", lnibble);
	
	return 0;
}
