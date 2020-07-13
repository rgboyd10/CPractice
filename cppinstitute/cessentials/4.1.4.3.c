#include <stdio.h>

int main()
{
	int zeros[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int ones[2] = {1, 1};
	int superOnes[5] = {1, 1, 1, 1, 1};
	int fiboSequence[6] = { 1, 1, 2, 3, 5, 8};
	int i;
	for (i = 0; i<10; i++)
	{
		printf("%i ", zeros[i]);
	}
	puts("");
	for (i = 0; i<2; i++)
	{
		printf("%i ", ones[i]);
	}
	puts("");
	for (i = 0; i<5; i++)
	{
		printf("%i ", superOnes[i]);
	}
	puts("");
	for (i = 0; i<6; i++)
	{
		printf("%i ", fiboSequence[i]);
	}
	puts("");

	return 0;
}
