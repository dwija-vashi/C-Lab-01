#include<stdio.h>
int main()
{
	int n;
	float x, y;
	printf("Enter n: ");
	scanf("%d", &n);
	
	printf("Enter x: ");
	scanf("%f", &x);
	
	if(n==1)
		y=1+x;
		
	else if(n==2)
		y=1+x/n;
		
	else if(n==3)
		y=1+x*x*x;
		
	else
		y=1+n*x;
		
	printf("%.2f", y);
		
	return 0;
}
