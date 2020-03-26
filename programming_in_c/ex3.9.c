//a program to find the next largest even multiple
#include <stdio.h>
#include <math.h>

int main(void)
{
	int eyes[3] = {365, 12258, 996};
	int jays[3] = {7, 23, 4};

	for(int x = 0; x < 3; x++)
	{
		int y = eyes[x] + jays[x] - eyes[x] % jays[x];
		printf("The next largest even multiple of %i and %i is %i.\n",eyes[x], jays[x], y);
	}
	
	return 0;
}
