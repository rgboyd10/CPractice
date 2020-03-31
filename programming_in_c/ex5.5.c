//Program to reverse the digits of a number and deals with negative integers.

#include <stdio.h>

int main()
{
	int number, right_digit, neg_flag;
	
	printf("Enter your number.\n");
	
	scanf("%i", &number);
	
	if(number < 0){
		neg_flag = 1;
		number = number * -1;
	}
	do{
		right_digit = number % 10;
		printf("%i", right_digit);
		number = number / 10;
	}

	while(number != 0);

	if(neg_flag == 1)
		printf("-");

	printf("\n");

	return 0;
}
