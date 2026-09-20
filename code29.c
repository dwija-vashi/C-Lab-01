#include<crtdefs.h>
int main()
{
	int q, num, rev=0, temp=0;
	printf("Enter the number: ");
	scanf("%d", &num);
	temp=num;
	
	while(num!=0)
	{
		q=num%10;
		rev=rev*10+q;
		num=num/10;
	}
	if(rev==temp)
	{
		printf("Given number is a palindrom=%d", temp);
	}
	else
	{
		printf("Given number is not a palindrom=%d", temp);
	}
	return 0;
}
