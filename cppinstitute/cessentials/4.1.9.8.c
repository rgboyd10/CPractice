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
		if(ip[x] == ".")
		{
			pcount++;
		}
		
		if(ip[x] == '0' ||
		   ip[x] == '1' ||
		   ip[x] == '2' ||
		   ip[x] == '3' ||
		   ip[x] == '4' ||
       		   ip[x] == '5' ||
		   ip[x] == '6' ||
		   ip[x] == '7' ||
		   ip[x] == '8' ||
		   ip[x] == '9' ||
		  )
		{
			
		}	
	}
	
	if(pcount >= 3)
		printf("Error: not a valid address.");
	else
	{
		
	}
}

bool isDigit(char c)
{
	if(c == '0' ||
	c == '1' ||
	c == '2' ||
	c == '3' ||
	c == '4' ||
	c == '5' ||
	c == '6' ||
	c == '7' ||
	c == '8' || 
	c == '9')
	{
		return true;	
	}
	else
	{
		return false;
	}
}

