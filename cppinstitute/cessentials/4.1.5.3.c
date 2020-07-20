#include <stdio.h>

int main()
{
	int a, b, c, d;
	char period = '.';
	char ip[16];
	scanf("%i %i %i %i", &a, &b, &c, &d);
	sprintf(ip, "%i%c%i%c%i%c%i",a, period, b, period, c, period, d);
	printf("%s\n",ip);
}
