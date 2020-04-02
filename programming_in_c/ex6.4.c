#include <stdio.h>
#include <math.h>

int main(void)
{
	float floop[10];
	float val, total = 0.0;
	int x = 0;
	printf("Enter in 10 values for the array.\n");
	while(x < 10)
	{
		scanf("%f\n", &val);
		floop[x] = val;
		printf("Array value: %f\n",floop[x]); 
		total += val;
		x++;	
	}
	printf("Average array values: %f\n",total / 10.0);
	return 0; 
}
