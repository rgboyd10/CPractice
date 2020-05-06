#include <stdio.h>
#include <math.h>
	
int xresult, yresult;

struct date
{
	int month;
	int day;
	int year;
};

void calcDays(struct date x, struct date y)
{
	int f, g;
	
	if(x.month <= 2)
		f = x.year - 1;
	else
		f = x.year;

	if(y.month <= 2)
		g = y.month + 13;
	else
		g = y.month + 1;
 
	xresult = 1461 * f / 4 + 153 * f / 5 + x.day;
	yresult = 1461 * g / 4 + 153 * g / 5 + y.day;
}

int main(void)
{
	struct date first, second;
	printf("Enter 2 dates that you would like to know the number of days between. Example format = earliest date latest date = mm:dd:yy mm:dd:yy.\n");
	scanf("%i:%i:%i %i:%i:%i", &first.month, &first.day, &first.year, &second.month, &second.day, &second.year); 
	calcDays(first, second);
	printf("\nThe time gap is %i days.\n", yresult - xresult);
}
