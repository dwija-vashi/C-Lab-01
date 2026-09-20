#include<crtdefs.h>
int main()
{
	int base, exp, i, power=1;
	printf("Enter base and exponent: ");
	scanf("%d %d", &base, &exp);
	
	for(i=1;i<=exp;i++)
	{
		power=power*base;
	}
	printf("Power=%d", power);
	
	return 0;
}
