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
			break;
		case: m
			break;
		case: y
			break;	` 
	
		default:
		break;
}

void dateUpdate(struct dateAndTime d)
{

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
	
	printf("Current time is: %i:%i:%i %i:%i:%i\n Would you like to change the date or time?\nEnter 1 for date or 2 for time.\n");	
	scanf("%i",&dortchoice);
	if(dortchoice !=)
	{
		dateUpdate();
	}
	else if()
	{
		timeUpdate();
	}
	else
	{
		printf("Incorrect"); 	
	}	

	return result;	
}

int main(void)
{
	
	printf("Please enter the current date and time in the format mm:dd:yy hh:mm:ss: \n");
	scanf("%i:%i:%i %i:%i:%i", &sdate.month, &sdate.day, &sdate.year, &stime.hour, &stime.minute, &stime.second);
	
	clockKeeper(currentd&t);
	
	return 0;
}
