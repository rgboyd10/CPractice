//calculator program

#include <stdio.h>
#include <math.h>

int main(void)
{
	float num, result;
	char op;

	printf("Begin Calculations\n");

	while(op != 'E')
	{
		scanf("%f %c", &num, &op);
	
		if(op == 'S'){
			printf("	Set Accumulator to %f\n",num);
			result = num;
		}
		else if(op == '/'){
			printf("	Divide by %f\n", num);
			result /= num;
		}
		else if(op == '-'){
			printf("	Subtract %f\n", num);
			result -= num;
		}
		else if(op == '*'){
			printf("	Multiple by %f\n", num);
			result *= num;
		}
		else if(op == '+'){
			printf("	Add by %f\n", num);
			result += num;
		}
		
		printf("= %f	Contents of Accumulator\n", result);
	}
	
	printf("= %f\nEnd of Calculations.\n", result);

	return 0;	 
}
