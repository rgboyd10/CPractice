#include <stdio.h>

int main()
{
	int daysInCurrentFebruary = 29;
	int daysInJanuary = 31;
	int daysInFebruary = daysInCurrentFebruary;
	int daysInMarch = 31;
	int daysInApril = 30;
	int daysInMay = 31; 
 	int daysInJune = 30;
	int daysInJuly = 31;
	int daysInAugust = 31;
	int daysInSeptember = 30;
	int daysInOctober = 31;
	int daysInNovember = 30;
	int daysInDecember = 31;
	int daysInFirstQuarter = daysInJanuary + daysInFebruary + daysInMarch;
	int daysInSecondQuarter = daysInApril + daysInMay + daysInJune;
	int daysInThirdQuarter = daysInJuly + daysInAugust + daysInSeptember;
	int daysInFourthQuarter = daysInOctober + daysInNovember + daysInDecember;
	
	printf("Days in Q1 of the current year: %i\n",daysInFirstQuarter);
	printf("Days in Q2 of the current year: %i\n",daysInSecondQuarter);
	printf("Days in Q3 of the current year: %i\n",daysInThirdQuarter);
	printf("Days in Q4 of the current year: %i\n",daysInFourthQuarter);
	return 0;
}
