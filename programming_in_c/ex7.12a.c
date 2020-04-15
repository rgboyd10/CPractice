#include <stdio.h>
#include <math.h>
#include <string.h>

void transposeMatrix(int a[4][5], int b[5][4], int row_length, int column_length, int brow_length, int bcolumn_length)
{
		
	for(int x = 0; x < row_length + 1; x++)
	{	
		for(int y = 0; y < column_length - 1; y++)
		{
			b[x][y] = a[y][x];
		}
	}


	printf("The transposed 4x5 matrix is now a 5x4 matrix below:\n");	
	for(int x = 0; x < brow_length; x++)
	{	
		for(int y = 0; y < column_length - 1; y++)
		{
			printf("%i",b[x][y]);
			if(y == column_length-2)
				printf("\n");
		}
	
	}
}
/*
12345
12345
12345
13245

1111
2222
3333
4444
5555

*/
int main(void)
{
	int matrix[4][5];
	int b[5][4];
	int **result;
	int row_length = sizeof(matrix) / sizeof(matrix[0]);
	int column_length = sizeof(matrix[0])/row_length;
	int brow_length = sizeof(b) / sizeof(b[0]);
	int bcolumn_length = sizeof(b[0])/brow_length;

	printf("Please enter numbers to be entered into a 4x5 matrix:\n");
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

	transposeMatrix(matrix,b,row_length, column_length, brow_length, bcolumn_length);

	return 0;
}
