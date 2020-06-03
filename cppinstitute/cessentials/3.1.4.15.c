#include <stdio.h>

int main(void)
{
        int countera = 0, counterb = 1, num = 1;
        char ch[] = "*#";
        scanf("%i",&num);
        if(num > 20)
        {
                num = 20;
        }

        if(num <= 1)
        {
                printf("*#\n");
                return 0;
        }

	for(counterb = 1; counterb <= num; counterb++)
	{
	
                for(countera = 0; countera < counterb; countera++)
		{
			printf("*#");
		}

                printf("\n");
                countera = 0;
                counterb++;
        }
        while(counterb <= num);	
	
	return 0;
}
