#include <stdio.h>
#include <math.h>

struct time
{
	int hours;
	int minutes;
	int seconds;	
};

struct time elapsed_time(struct time x, struct time y)
{
	struct time bob;
	bob.hours = x.hours - y.hours;
	bob.minutes = x.minutes - y.minutes;
	bob.seconds = x.seconds - y.seconds;

	if(bob.hours < 0)
		bob.hours = bob.hours * -1;
	if(bob.minutes < 0)
		bob.minutes = bob.minutes * -1;
	if(bob.seconds < 0)
		bob.seconds = bob.seconds * -1;

	return bob;
}

struct time getInput()
{
	struct time x, y, z;
	printf("\nPlease enter two times(military or regular) to find the elapsed time between them. Format should be hh:mm:ss hh:mm:ss\n");
	scanf("%i:%i:%i %i:%i:%i", &x.hours, &x.minutes, &x.seconds, &y.hours, &y.minutes, &y.seconds);
	if(
	x.hours > 24 ||
	x.hours < 0 || 
	y.hours > 24 ||
	y.hours < 0 ||
	x.minutes > 60 ||
	x.minutes < 0 ||
	y.minutes > 60 ||
	y.minutes < 0 ||
	x.seconds > 60 ||
	x.seconds < 0 ||
	y.seconds > 60 ||
	y.seconds < 0	
	)	
	{
		printf("\nInvalid time entered. Please try again.\n");
		getInput();
	}
	else
	{
		z = elapsed_time(x,y);
	}
	return z;
	
}

int main(void)
{	
	struct time r;
	r = getInput();
	
	printf("\nThe elapsed time is %i:%i:%i.\n", r.hours, r.minutes, r.seconds);
	
	return 0;
}
