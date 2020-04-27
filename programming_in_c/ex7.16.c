// a program to convert a positive integer to another base

#include <stdio.h>

int convertedNumber[64];
long int numberToConvert = 1;
int base = 1;
int digit = 0;

void getNumberAndBase(void)
{
	while(base <= 2 || base >= 16)
	{		
		printf("\nPlease enter a number to be converted. Enter 0 to exit.\n");
		scanf("%li", &numberToConvert);	
		
		if(numberToConvert == 0) return;
	
		printf("Enter a base between 2 and 16.\n");
		scanf("%i", &base);
		if(base >= 2 && base <= 16)
		{
			printf("Good base.\n");
			break;
		}

	}	
}

void convertNumber(void)
{
	do {
		convertedNumber[digit] = numberToConvert % base;
		digit++;
		numberToConvert /= base;
	}
	while(numberToConvert != 0);
	numberToConvert = 1;
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
	getNumberAndBase();
	while(numberToConvert != 0) 
	{		
		convertNumber();
		displayConvertedNumber();
		getNumberAndBase();
	}

	printf("\n0 entered. Program exited.\n");
	return 0;
}
