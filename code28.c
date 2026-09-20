#include<crtdefs.h>
int main()
{
	int q, num, sum=0, temp=0;
	printf("Enter the number: ");
	scanf("%d", &num);
	temp=num;
	
	while(num!=0)
	{
		q=num%10;
		sum=sum+q*q*q;
		num=num/10;
	}
	if(sum==temp)
	{
		printf("Given number is armstrong=%d", temp);
	}
	else
	{
		printf("Given number is not armstrong=%d", temp);
	}
	return 0;
}
