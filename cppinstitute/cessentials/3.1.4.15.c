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
        int countera = 0, counterb = 1, num = 1;
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

	for(counterb = 1; counterb <= num * 2; counterb++)
	{	
                for(countera = 0; countera < counterb; countera++)
		{
			
			for(int x = 0; x < y; x++)
			{
				for(int z = 0; z < w; w++)
				{
				
				}
			}
			if(countera == 0 || countera == counterb - 1)
			{
				printf("*");
			}
		}

                printf("\n");
                counterb++;
        }
        while(counterb <= num);	
	
	return 0;
}
