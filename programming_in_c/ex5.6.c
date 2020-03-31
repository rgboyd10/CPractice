//a program that takes an integer from the terminal, extracts, and displays each digit of the integer in English

#include <stdio.h>
#include <math.h>

int main(void)
{
	int x, digit, reversed_int, extra_zeroes;
	scanf("%i", &x);
	
	extra_zeroes = 0;
	while (x != 0 && (x % 10) == 0) {
		extra_zeroes++;
		x /= 10;
	}

	reversed_int = 0;
	while (x > 0) {
		digit = x % 10;
		reversed_int = reversed_int * 10 + digit;
		x /= 10;
	}

	while(reversed_int != 0)
	{
		digit = reversed_int % 10;
		switch(digit)
		{
			case 1:
				printf("one ");
				break;
			case 2:
				printf("two ");
				break;
			case 3:
				printf("three ");
				break;
			case 4:
				printf("four ");
				break;
			case 5:
				printf("five ");
				break;
			case 6:
				printf("six ");
				break;
			case 7:
				printf("seven ");
				break;
			case 8:
				printf("eight ");
				break;
			case 9:
				printf("nine ");
				break;
			case 0:
				printf("zero ");
				break;
			default:
				break;
		}
		reversed_int = reversed_int/10;
	}
	printf("\n");
	return 0;
}
