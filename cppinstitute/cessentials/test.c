/*
	j = 0
	i = 2

	j = 1
	i = 4

	j = 2;
	i = 8

	j = 3;
	i = 16;

	j = 4;
	i = 32;

	j = 5;
	i = 64;
	
	j = 6;
	i = 128;


	0  || 1  = 0 = w1
       1 && 0 == 0 = w2	

 */

#include <stdio.h>

int main(void)
{
	int Int;
	char Char;
	short Short;
	float Float;

	Int = 100;
	printf("Int = %i\n", Int);

	Char = '$';
	printf("Char = %c\n", Char);
	
	Short = Char;
	printf("Short = %hi\n", Short);

	Int = Short + Char + Float;
	printf("Short + Char + Float = %i\n", Int);

	Float = Int;
	printf("Float = %f\n");

	printf("%f", Float);
	printf("Answer = %f", Float);

	return 0;
}
