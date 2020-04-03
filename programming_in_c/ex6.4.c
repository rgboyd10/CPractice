#include <stdio.h>
#include <math.h>

int main(void)
{
	float floop[10];
	float val, total;
	int floop_size = sizeof floop / sizeof floop[0];

	for(int x = 0; x < floop_size; x++)
	{	
		printf("Enter in %i / 10 values for an array.\n",x + 1);
		scanf("%f",&floop[x]);
		total += floop[x];
	}
	
	for(int y = 0; y < floop_size; y++)
		printf("Array value %i: %f\n",y + 1,floop[y]);

	printf("Floop size: %i\n",floop_size);
	printf("Average array values: %f\n",total / floop_size);

	return 0; 
}
