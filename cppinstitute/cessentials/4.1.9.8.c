#include <stdio.h>
#include <string.h>

int main(void)
{
	char *ip;
	int pcount = 0;
	printf("Please enter an ip address.");
	scanf("%c", ip);

	for(int x = 0; x < sizeof(ip); x++)
	{
		if(ip[x] = ".")
		{
			pcount++;
		}	
	}
	
	if(pcount >= 3)
		printf("Error: not a valid address.");

}
