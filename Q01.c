#include<stdio.h> //header file
int main()
{ //start bracket
	float P, R, T, SI;
	printf("Enter principal: "); //reading the value
	scanf("%f", &P); //storing the value
	
	printf("Enter rate: ");
	scanf("%f", &R);
	
	printf("Enter time: ");
	scanf("%f", &T);
	
	SI=P*R*T/100;
	printf("Simple Interest=%.2f", SI);
	
	return 0;
} //end bracket
