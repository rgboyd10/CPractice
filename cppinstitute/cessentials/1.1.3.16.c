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
	int daysInSeptember = 3;
	int daysInOctober 		= 3;
	int daysInNovember 		= 3;
	int daysInDecember 		= 3;
	int daysInFirstHalf = daysIn January + daysIn December + daysIn March 
		+ daysInApril + daysInMay + daysInJuly;
	int daysInSecondHalf = daysInJune + daysInAugust + daysInSeptember 
		+ daysIn October + daysIn November + daysIn February;
	printf("Days in the first half of the current year: %d\n", daysInFirstHalf);
	printf("Days in the second half of the current year: %d\n", daysInSecondHalf);
	printf("Days in the current year: %d\n", daysInFirstHalf + daysInSecondHalf);
	return 0;
}i
