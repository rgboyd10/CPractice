//A program to sort an array of integers into ascending order

#include <stdio.h>
#include <math.h>

void sort(int a[], int n, int x)
{
	int i, j, temp;
	if(x == 1)
	{
		for(i = 0; i < n - 1; i++)
			for(j = i + 1; j < n; j++)
				if(a[i] > a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
	}
	else //x==0 
	{
		for(i = 0; i < n - 1; i++)
			for(j = i + 1; j < n; j++)
				if(a[i] < a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
	}
}

int main(void)
{
	int i;
	int array[16] = {34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};
	int x = 0;
	printf("Please enter a 1 to sort an array in ascending order or a 0 to sort an array in descending order: \n");
	scanf("%i", &x);
	if(x == 0 || x == 1)
	{
		printf("Good person.");
		void sort(int a[], int n, int x);
	
		printf("The array before the sort:\n");
	
		for(i = 0; i < 16; i++)
		printf("%i", array[i]);
	
		sort(array, 16, x);
		
		printf("\n\nThe array after the sort:\n");
	
		for(i = 0; i < 16; i++)
		printf("%i ", array[i]);
	
		printf("\n");
	}
	else
		printf("Bad person. No sorting for you.");

	return 0;
}

