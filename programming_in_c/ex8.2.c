#include <stdio.h>
#include <math.h>
	
int xresult, yresult;

struct date
{
	int month;
	int day;
	int year;
};

int f(int year, int month)
{
	int r;
	if(month <= 2)
		r = year - 1;
	else
		r = year;
	return r;
}

int g(int month)
{
	int r;
	if(month <= 2)
		r = month + 13;
	else
		r = month + 1;
	
	return r;
}

int calcDiff(struct date x, struct date y)
{
	int r;
	xresult = 1461 * f(x.year, x.month) / 4 + 153 * g(x.month) / 5 + x.day;
	yresult = 1461 * f(y.year, y.month) / 4 + 153 * g(y.month) / 5 + y.day;
	r = xresult - yresult;
	if(r < 0)
		r = r * -1;
	else
		r = r;

	return r;
}

int main(void)
{
	struct date first, second;
	printf("Enter 2 dates that you would like to know the number of days between. Example format = mm:dd:yy mm:dd:yy.\n");
	scanf("%i:%i:%i %i:%i:%i", &first.month, &first.day, &first.year, &second.month, &second.day, &second.year); 
	printf("\nThe time gap is %i days.\n", calcDiff(first,second));
}
