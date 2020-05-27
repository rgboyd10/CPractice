#include <stdio.h>

int main(void)
{
	/*
		numbers greater than or equal to 1 and less than 2 - Very bad.
numbers greater than or equal to 2 and less than 3 - Bad.
numbers greater than or equal to 3 and less than 4 - Neutral.
numbers greater than or equal to 4 and less than 5 - Good.
numbers greater than or equal to 5 and less than 6 - Very good.
	*/
	
	float in;
	int out;

	printf("Please enter a number.\n");
	scanf("%f", &in);
	
	if(in >= 1 && in < 2)
		printf("Very bad.\n");
	else if(in >= 2 && in < 3)
		printf("Bad.\n");
	else if(in >= 3 && in < 4)
		printf("Neutral.\n");
	else if(in >= 4 && in < 5)
		printf("Good.\n");
	else if(in >= 5 && in < 6)
		printf("Very good.\n");
	else
		printf(" \n");
		return 0;
}
