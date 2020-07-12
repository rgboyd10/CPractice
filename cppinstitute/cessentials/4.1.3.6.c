#include <stdio.h>
int main()
{
	float numbers[10] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9};
	float a, b;
	int x;

	for(x = 0; x < 10; x++)
	{
		if(numbers[x] < numbers[x+1])
		{
			a = numbers[x];
			numbers[x] = numbers[x+1];
			numbers[x+1] = a;
		}
		
		for(x = 0; x < 10; x++)
		{
			printf("%.2f ",numbers[x]);
		}
	
		printf("\n");
	}

	return 0;

}	
