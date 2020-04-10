#include <stdio.h>
#include <math.h>

int lcm(int u, int v)
{
	int x = 1;
	int leastcm;
	while(x < u * v)
	{
		if(u * x == v * x)
		{
			leastcm = x;
			break;
		}
		x++;
	}
}

int main(void)
{
	int u, v;
	printf("Please enter two integers that you would like to know the least common multiple of:");
	scanf("%i %i", &u, &v);
	int result = lcm(u, v);
	printf("The least common multiple of %i and %i is %i.\n",u,v,result);
	return 0;
}
