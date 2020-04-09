//a program to calculate the positive and negative roots using a quadratic formula and handle some other things.
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
	double discriminant;
	printf("To solve for the roots of a quadratic equation, please enter an a, b, and c value: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	discriminant = pow(b,2)-4*a*c;
	if(discriminant > 0)
	printf("The positive root is %lf and the negative root is %lf.\n", calculate_quadratic_positive(a, b, c), calculate_quadratic_negative(a, b, c)); 
	else	
	printf("The positive root is %lf and the negative root is %lf because they are imaginary numbers.\n", calculate_quadratic_positive(a, b, c), calculate_quadratic_negative(a, b, c)); 
	
	return 0;
}
