#include <stdio.h>
#include <math.h>

int row_length, column_length, brow_length, bcolumn_length;;	

void transposeMatrix()
{
	
	int matrix[row_length][column_length];
	int b[brow_length][bcolumn_length];

	printf("Please enter numbers to be entered into a %ix%i matrix:\n",row_length, column_length);
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

	for(int x = 0; x < row_length; x++)
	{	
		for(int y = 0; y < column_length; y++)
		{
			b[x][y] = matrix[y][x];
		}
	}


	printf("The transposed %ix%i matrix is now a %ix%i matrix below:\n",row_length, column_length, brow_length, bcolumn_length);	
	for(int x = 0; x < brow_length; x++)
	{	
		for(int y = 0; y < column_length; y++)
		{
			printf("%i",b[x][y]);
			if(y == bcolumn_length-1)
				printf("\n");
		}
	
	}

}

int main(void)
{

	printf("Enter the row length of the first array:\n");
	scanf("%i",&row_length);
	printf("Enter the column length of the first array:\n");
	scanf("%i",&column_length);
	printf("Enter the row length of the second array:\n");
	scanf("%i",&brow_length);
	printf("Enter the column length of the second array:\n");
	scanf("%i",&bcolumn_length);

	transposeMatrix();

	return 0;
}
