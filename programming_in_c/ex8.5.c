#include <stdio.h>
#include <math.h>
#include <string.h>

char amorpm[] = "AM";

struct time
{
	int seconds;
	int minutes;
	int hours;
};

struct date
{
	int day;
	int month;
	int year;
};

struct dateAndTime
{
	struct date sdate;
	struct time stime;
};

void timeUpdate()
{
	
}

void dateUpdate()
{

}

struct dateAndTime clockKeeper(struct dateAndTime x)
{
	struct dateAndTime result;

	printf("Current time is: %i:%i:%i %i:%i:%i\n Would you like to change the date or time?\nEnter 1 for date or 2 for time.\n");	
	scanf("%i",&dortchoice);
	if(x.sdate.hours >= 12 && x.sdate.minutes >= 0 && x.sdate.seconds >= 0)
	{
		dateUpdate();
	}
	else if()
	{
		timeUpdate();
	}
	else
	{
		
	}	

	return result;	
}

int main(void)
{
	//record continuous input from user. Certain commands will reduce or increase the time. 
	struct dateAndTime currentd&t;
	int dortchoice; 
	printf("Please enter the current date and time in the format mm:dd:yy hh:mm:ss: \n");
	scanf("%i:%i:%i %i:%i:%i");
	scanf("%i",&dortchoice);
	if(dortchoice == 1)
	{
		cur
	}
	else if(dortchoice == 2)
	{
		
	}
	else
	{
		
	}
	
	
	
	
	return 0;
}
