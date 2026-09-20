#include<crtdefs.h>
int main()
{
	int q, num, rev=0;
	printf("Enter the number: ");
	scanf("%d", &num);
	
	while(num!=0)
	{
		q=num%10;
		rev=rev*10+q;
		num=num/10;
	}
	printf("Reverse of number=%d", rev);
	
	return 0;
}
