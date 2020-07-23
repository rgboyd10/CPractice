#include <stdio.h>

int main(void) {

	char c;
	short s;
	int i;
	long l;
	long long ll;
	float f;
	double d;
	int *x;
	char *b;
		
    	printf("This computing environment uses:\n");
	printf("%d byte for chars\n", sizeof(char));
	printf("%d byte for char variables\n", sizeof(c));
    	printf("%d bytes for shorts\n", sizeof(short int));
	printf("%d byte for short variables\n", sizeof(s));
    	printf("%d bytes for ints\n", sizeof(int));
	printf("%d byte for int variables\n", sizeof(i));
	printf("%d bytes for longs\n", sizeof(long int));
	printf("%d byte for long variables\n", sizeof(l));
	printf("%d bytes for long longs\n", sizeof(long long int));
	printf("%d byte for long long variables\n", sizeof(ll));
	printf("%d bytes for floats\n", sizeof(float));
	printf("%d byte for float variables\n", sizeof(f));
	printf("%d bytes for doubles\n", sizeof(double));
	printf("%d byte for double variables\n", sizeof(d));
	printf("%d bytes for pointers\n", sizeof(int *));
	printf("%d bytes for pointer variables\n", sizeof());
	printf("%d bytes for address of char variable\n", sizeof());   
	printf("%d bytes for pointer to char variable\n", sizeof());
	printf("%d byte for value stored by pointer to char variable\n", sizeof());
return 0;
}
