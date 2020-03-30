//A program that sums the digits of a number entered.
#include <stdio.h>
#include <math.h>

int main(void)
{
	int x, sum = 0, current_digit;
	printf("Enter a number: ");
	scanf("%i",&x);
	while(x > 0)
	{
		current_digit = x % 10;
		sum += current_digit;
		x = x / 10;
	}

	printf("%i\n",sum);
	
	return 0;
}
