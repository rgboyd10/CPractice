#include <stdio.h>

int main()
{
	char alphabet[26];
	char letter = 'a';
	//fill the array
	for(int x = 0; x < 26; x++)
	{
		alphabet[x] = letter++;
	}

	//print out in reverse order
	for(int x = 25; x >= 0; x--)
	{
		printf("%c\n",alphabet[x]);	
	}

	//print out great
	for(int x = 0; x < 26; x++)
	{
		if(alphabet[x] == 'g')		
			printf("%c", alphabet[x]);
	}	

	for(int x = 0; x < 26; x++)
	{
		if(alphabet[x] == 'r')		
			printf("%c", alphabet[x]);
	}	
	
	for(int x = 0; x < 26; x++)
	{
		if(alphabet[x] == 'e')		
			printf("%c", alphabet[x]);
	}	
	
	for(int x = 0; x < 26; x++)
	{
		if(alphabet[x] == 'a')		
			printf("%c", alphabet[x]);
	}	
		
	for(int x = 0; x < 26; x++)
	{
		if(alphabet[x] == 't')		
			printf("%c", alphabet[x]);
	}	
	
	printf("\n");

	return 0;
}
