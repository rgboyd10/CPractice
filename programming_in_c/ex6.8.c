#include <stdio.h>
#include <math.h>

int main(void)
{
	int arraylength, size;
	printf("How long is your array?\n");
	scanf("%i",&arraylength);
	int vararray[arraylength];
	size = sizeof(vararray) / sizeof(vararray[0]);
	printf("Your array is of length: %i.\n", size);
	return 0;
}
