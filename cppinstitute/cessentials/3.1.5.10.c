#include <stdio.h>
int main(void)
{
	int Signed = -8, VarS;
	unsigned Unsigned = 6, VarU;

	/*equivalent to division by 2 -> Vars == -4*/
	VarS = Signed >> 1;
	printf("%i\n",VarS);
	/*equivalent to multiplcatrion by 4 - > Vars == -32*/
	VarS = Signed << 2;
	printf("%i\n",VarS);
	/*equivalent to division by 4 - > VarU == 1*/
	VarU = Unsigned >> 2;
	printf("%i\n",VarU);
	/*equivalent to multiplication by 2 -> VarU == 12*/
	VarU = Unsigned << 1;
	printf("%i\n",VarU);
	return 0;
}
