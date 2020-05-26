#include <stdio.h>


int main(void)
{
	int w, x, y, z;
	unsigned long r;
	printf("Please provide four numbers for an ip address without the periods: \n");
	scanf("%i %i %i %i", &w, &x, &y, &z);
	
	if(w < 0 || w > 255 ||
		x < 0 || x > 255 ||
		y < 0 || y > 255 ||
		z < 0 || z > 255)
	{
		printf("Incorrect IP Address.\n");
	}
	else
	{
		printf("Human-readable IP address is: %i.%i.%i.%i\n", w, x, y, z);
		r = (w * 256 * 256 * 256) + (x * 256 * 256) + (y * 256) + (z * 1);
		printf("IP adrress as a 32-bit number: %lu \n", r);
	}
	
	return 0;
}
