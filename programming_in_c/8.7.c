//Program to illustrate structures and arrays

#include <stdio.h>

int main(void)
{
	int i;
	
	struct month
	{
		int numberOfDays;
		char name[3];
	};
	
	const struct month months[12] = 
	{
		{31, {'J', 'a', 'n'}}, {28, {'F', 'e', 'b'}},
		{31, {'M', 'a', 'r'}}, {30, {'A', 'p', 'r'}},
		{31, {'M', 'a', 'r'}}, {30, {'J', 'u', 'n'}},
		{31, {'J', 'u', 'l'}}, {31, {'A', 'u', 'g'}},
		{30, {'S', 'e', 'p'}}, {31, {'O', 'c', 't'}},
		{30, {'N', 'o', 'v'}}, {31, {'D', 'e', 'c'}}
	};

	
}
