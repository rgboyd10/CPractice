#include <stdio.h>
#include <math.h>

int arr[3] = {5, 6, 7};
int sz = 3;
int sum = 0;

int arraySum()
{
	for(int x = 0; x < sz; x++)
	{
		sum += arr[x];
	}
	return sum;
}

int main(void)
{
	printf("The sum of the array is %i.\n",arraySum());
	return 0;
}
