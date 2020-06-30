#include <stdio.h>

int getInput()
{
	int in;
	scanf("%i", &in);
	return in;
}

int main()
{
	int num;
	unsigned char ch, hnibble, lnibble;
	printf("Please enter a number smaller than 256.\n");
	num = getInput();
	ch = (char)num;
	hnibble = (ch & 0x0F) << 4;
	lnibble = (ch & 0xF0) >> 4;
	
	printf("H nibble: %u\n", hnibble);
	printf("L nibble: %u\n", lnibble);
	
	return 0;
}
