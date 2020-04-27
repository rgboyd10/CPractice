// a program to convert a positive integer to another base

#include <stdio.h>
#include <math.h>

int convertedNumber[64];
long int decision = 1;
long int numberToConvert;
int base;
int digit;

void getNumberAndBase(void)
{
		printf("Enter a base between 2 and 16.\n");
		scanf("%i", &base);
		if(base >= 2 && base <= 16)
		{
			printf("Good base.\n");
		}
		else
		{
			printf("Bad base.\n");
			getNumberAndBase();
		}
}

void convertNumber(void)
{
	digit = 0;
	do {
		convertedNumber[digit] = numberToConvert % base;
		digit++;
		numberToConvert /= base;
	}
	while(numberToConvert != 0);
}	

void displayConvertedNumber(void)
{
		const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
		int nextDigit;
	
		printf("Converted number = ");
		
		for(--digit; digit >= 0; --digit)
		{
			nextDigit = convertedNumber[digit];
			printf("%c", baseDigits[nextDigit]);
		}
	
		printf("\n");
}

int main(void)
{
	while(decision != 0)
	{	
		printf("\nPlease enter a number to be converted. Enter 0 to exit.\n");
		scanf("%li", &numberToConvert);	
		decision = numberToConvert;

		if(decision == 0) break;

		getNumberAndBase();
		convertNumber();
		displayConvertedNumber();
	}
	
	printf("\n0 entered. Program exited.\n");
	
	return 0;
}
