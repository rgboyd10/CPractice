//Function to calculate the nth triangular number so that the value of the triangularNumber is returned by the function.

#include <stdio.h>

int calculateTriangularNumber(int n)
{
	int i, triangularNumber = 0;
	
	for(int i = 1; i <= n; i++)
		triangularNumber += i;
	
	return triangularNumber;
}
	
int main(void)
{
	printf("Triangular number of 10 is %i\n", calculateTriangularNumber(10));
	printf("Triangular number of 20 is %i\n", calculateTriangularNumber(20));
	printf("Triangular number of 30 is %i\n", calculateTriangularNumber(30));
	
	return 0;
}
