#include <stdio.h>

/*1 5 4 2 6*/

int main()
{
	int numbers[5];
	int i, aux;
	int swappped;
	
	/*ask the user to enter 5 values*/
	for(i = 0; i < 5; i++)
	{
		printf("\Enter value #%i\n", i+1);
		scanf("%d", &numbers[i]);		
	}

	/*sort them*/
	do{
		swapped = 0;
		for(i = 0; i < 4; i++)
		{
			if(numbers[i] > numbers[i + 1])
			{
				aux = numbers[i];
				numbers[i] = numbers[i+1];
				numbers[i + 1] = aux;
			}
		}
	}while(swapped);

	/*print results*/
	printf("\nSorted array: ");
	for(i = 0; i < 5; i++)
	{
		printf("%d ", numbers[i]);
	}
		
	printf("\n");
	return 0;
}
