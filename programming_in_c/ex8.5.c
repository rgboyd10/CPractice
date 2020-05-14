#include <stdio.h>
#include <math.h>
#include <string.h>

char amorpm[] = "AM";

struct time
{
	int second;
	int minute;
	int hour;
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

void timeUpdate(struct dateAndTime t)
{
	int amount;
	char c;
	printf("Would you like to add days, months or years?\n Enter d for days.\nEnter m for months.\nEnter y for years.\n");
	scanf("%c", &c);
	
	switch(c)
		case: d
			t.day += 1;	
			break;
		case: m
			t.month += 1;
			break;
		case: y
			t.hour += 1;
			if(t.hour > 12)
			{
				t.hour = 1;
				if(amorpm == "AM")
					amorpm = "PM";
				else
					amorpm = "AM";
			}
			break;	
		default:
			printf("Incorrect input. Please try again.\n");
			timeUpdate();	
		break;
}

void dateUpdate(struct dateAndTime d)
{
	int amount;
	char c;
	printf("Would you like to add seconds, minutes or hours?\n Enter s for seconds.\n Enter m for minutes.\n Enter h for hours.\n");
	scanf("%c", &c);
	
	switch(c)
		case: s
			
			break;
		case: m
			break;
		case: h
			break;	
		default:
			printf("Incorrect input. Please try again.\n");
			timeUpdate();	
		break;

}

struct dateAndTime clockKeeper(struct dateAndTime x)
{
	struct dateAndTime result;
	int dortchoice; 
	printf("Please enter the current date and time in the format mm:dd:yy hh:mm:ss: \n");
	scanf("%i:%i:%i %i:%i:%i", &sdate.month, &sdate.day, &sdate.year, &stime.hour, &stime.minute, &stime.second);
	printf("\nEnter 1 to update the date or 0 to update the time.\n");
	scanf("%i",&dortchoice);
	
	if(dortchoice == 1)
		dateUpdate();
	else if(dortchoice == 0)
		timeUpdate();
	else
		printf("Incorrect input, please try again.");
		clockKeeper(x);
	
	return result;	
}

int main(void)
{
	
	printf("Please enter the current date and time in the format mm:dd:yy hh:mm:ss: \n");
	scanf("%i:%i:%i %i:%i:%i", &sdate.month, &sdate.day, &sdate.year, &stime.hour, &stime.minute, &stime.second);
	
	clockKeeper(currentd&t);
	
	return 0;
}
