#include <stdio.h>
#include <math.h>

int arraySum(int arr[], int sz)
{
	int sum = 0;
	for(int x = 0; x < sz; x++)
	{
		sum += arr[x];
	}
	return sum;
}

int main(void)
{
	int sz = 3;
	int arr[3] = {5, 6, 7};
	printf("The sum of the array is %i.\n",arraySum(arr,sz));
	return 0;
}
