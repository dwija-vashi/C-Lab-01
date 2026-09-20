#include<crtdefs.h>
int main()
{
	int q, num, sum=0;
	printf("Enter the number: ");
	scanf("%d", &num);
	
	while(num!=0)
	{
		q=num%10;
		sum=sum+q;
		num=num/10;
	}
	printf("Sum of digits of number=%d", sum);
	
	return 0;
}
