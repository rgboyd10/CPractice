#include <stdio.h>

int main()
{
	int numbers[5];
	int i;
	int aux;
	
	for(i = 0; i < 4; i++)
	{
		if(numbers[i] > numbers[i + 1])
		{
			aux = numbers[i];
			numbers[i] = numbers[i+1];
			numbers[i + 1] = aux;
		}
	}
}
