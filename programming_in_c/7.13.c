//multidimensional arrays and functions

#include <stdio.h>

int main(void)
{
	void scalarMultiply (int matrix[3][5], int scalar);
	void displayMAtrix(int matrix[3][5]);
	int sampleMatrix[3][5] = 
				{7, 16, 55, 13, 12},
				{12, 10, 52, 0, 7},
				{-2, 1, 2, 4, 9};

	printf("Original matrix:\n");
	displayMatrix(sampleMatrix);
	
	scalarMultiply(sampleMatrix, 2);
	printf("\n
}
