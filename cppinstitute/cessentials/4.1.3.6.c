#include <stdio.h>
int main()
{
	float numbers[10] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9};
	float a;
	int x, y, z;

	for(x = 0; x < 10; x++)
	{
		for(z = 0; z < 10; z++)
		{
			if(numbers[z] < numbers[z+1])
			{
				a = numbers[z];
				numbers[z] = numbers[z+1];
				numbers[z+1] = a;
			}
			
		} 
		
		for(y = 0; y < 10; y++)
		{
			printf("%.2f ",numbers[y]);
		}
	
		printf("\n");
	}

	return 0;

}	
