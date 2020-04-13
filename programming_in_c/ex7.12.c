#include <stdio.h>
#include <math.h>

int** transposeMatrix(int a[4][5], int b[5][4])
{
	
	return b;
}

int main(void)
{
	int matrix[4][5];
	int b[5][4];
	int row_length = sizeof(matrix) / sizeof(matrix[0]);
	int column_length = sizeof(matrix[0])/row_length;

	printf("Please enter numbers to be entered into a 4x5 matrix: ");
	for(int x = 0; x < row_length; x++)
	{
		for(int y = 0; y < column_length; y++)
		{
			scanf("%i",&matrix[x][y]);
		}
	}
	 
	for(int x = 0; x < row_length; x++)
	{	
		for(int y = 0; y < column_length; y++)
		{
			printf("%i",matrix[x][y]);
			if(y == column_length-1)
				printf("\n");
		}
	}

	int row_length = sizeof(matrix) / sizeof(matrix[0]);
	int column_length = sizeof(matrix[0])/row_length;

	printf("Please enter numbers to be entered into a 4x5 matrix: ");
	for(int x = 0; x < row_length; x++)
	{
		for(int y = 0; y < column_length; y++)
		{
			scanf("%i",&matrix[x][y]);
		}
	}
	 
	for(int x = 0; x < row_length; x++)
	{	
		for(int y = 0; y < column_length; y++)
		{
			printf("%i",matrix[x][y]);
			if(y == column_length-1)
				printf("\n");
		}
	}

	

	return 0;
}
