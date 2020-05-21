#include <stdio.h>
int main()
{
	float studentAYear1 = 4.2;
	float studentAYear2 = 4.5;
	float studentAYear3 = 4.2;
	float aavg = (studentAYear1 + studentAYear2 + studentAYear3) / 3;	

	float studentBYear1 = 4.3;
	float studentBYear2 = 4.4;
	float studentBYear3 = 4.7;
	float bavg = (studentBYear1 + studentBYear2 + studentBYear3) / 3;

	float studentCYear1 = 4.3;
	float studentCYear2 = 4.8;
	float studentCYear3 = 4.9;
	float cavg = (studentCYear1 + studentCYear2 + studentCYear3) / 3;

	/* your code */
	
	printf("\nStudent name\t1stYGrade\t2ndYGrade\t3rdYGrade\tAvg\n");
	printf("\nStudent A\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n",studentAYear1, studentAYear2, studentAYear3, aavg);
	printf("\nStudent B\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n",studentBYear1, studentBYear2, studentBYear3, bavg);	
	printf("\nStudent C\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n",studentCYear1, studentCYear2, studentCYear3, cavg);
	return 0;
}
