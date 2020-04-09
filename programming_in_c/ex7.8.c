//a program to calculate the positive and negative roots using a quadratic formula.
#include <stdio.h>
#include <math.h>
	
double calculate_quadratic_positive(double a, double b, double c)
{
	double pos_root = (-b+(sqrt(pow(b,2)-4*a*c))) / (2*a);
	return pos_root;
}

double calculate_quadratic_negative(double a, double b, double c)
{	
	double neg_root = (-b-(sqrt(pow(b,2)-4*a*c))) / (2*a);
	return neg_root;
}

int main(void)
{
	double a, b, c;
	printf("To solve for the roots of a quadratic equation, please enter an a, b, and c value: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("The positive root is %lf and the negative root is %lf.", calculate_quadratic_positive(a, b, c), calculate_quadratic_negative(a, b, c)); 

	return 0;
}
