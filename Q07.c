#include<stdio.h> //header file
int main()
{ //start bracket
	float base, height, area;
	printf("Enter base: ");
	scanf("%f", &base);
	
	printf("Enter height: ");
	scanf("%f", &height);
	
	area=0.5*base*height;
	printf("Area of triangle=%.2f", area); //.2f=2 digits after decimal
	
	return 0;
} //end bracket
