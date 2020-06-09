#include <stdio.h>

/*
 desired output
 3
 
**
* *
*  *
*   *
*  *
* *
**


 * */




int main(void)
{
        int countera = 1, counterb = 1, num = 1;
        scanf("%i",&num);
        if(num > 20)
        {
                num = 20;
        }

        if(num <= 1)
        {
                printf("*\n");
                return 0;
        }

	for(counterb = 0; counterb <= num * 2; counterb++)
	{	
		printf("*");
       		if(countera = counterb + 1)
		{
			printf("*");
		}

		countera++; 	        
		printf("\n");
        }

	for(countera = counterb; countera > 0; countera--)
	{
		if(countera = counterb - 1)
		{
			printf("*");
		}
	}
	
	return 0;
}
