#include <stdio.h>

int main()
{
	char string1[20];
	char string2[20];
	char string3[20];
	char string4[20];

	printf("Please enter four names. Each name must be less than 20 characters.\n");
	scanf("%s", &string1);
	scanf("%s", &string2);
	scanf("%s", &string3);
	scanf("%s", &string4);
	printf("%s\n%s\n%s\n%s\n", string4, string3, string2, string1);
}
