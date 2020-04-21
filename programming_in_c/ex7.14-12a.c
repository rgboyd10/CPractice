#include <stdio.h>
#include <math.h>
#include <string.h>

int b[5][4], matrix[4][5];
int row_length, column_length, brow_length, bcolumn_length;

void transposeMatrix()
{
		
	for(int x = 0; x < row_length + 1; x++)
	{	
		for(int y = 0; y < column_length - 1; y++)
		{
			b[x][y] = matrix[y][x];
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
	
	 row_length = sizeof(matrix) / sizeof(matrix[0]);
	 column_length = sizeof(matrix[0])/row_length;
	 brow_length = sizeof(b) / sizeof(b[0]);
	 bcolumn_length = sizeof(b[0])/brow_length;

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

	transposeMatrix();

	return 0;
}
