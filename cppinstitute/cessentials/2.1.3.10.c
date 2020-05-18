#include <stdio.h>

int main()
{
	char zero = '0';

	for(int x = 1; x <= 10; x++)
	{
		printf("'%i' - '%c' is : %i\n", x, zero, zero);
	} 

	return 0;
}
