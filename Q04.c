#include<stdio.h>
int main()
{
	float f,c;
	printf("Enter value in farenheit: ");
	scanf("%f", &f);
	
	c=(f-32)*5/9;
	printf("Value in centigrade= %.2f", c);
	
	return 0;
}
