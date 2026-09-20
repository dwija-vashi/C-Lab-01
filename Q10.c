#include<stdio.h>
int main()
{
	float M, P, C, E, CM;
	printf("Enter marks in mathematics out of 200: ");
	scanf("%f", &M);
	
	printf("Enter marks in physics out of 200: ");
	scanf("%f", &P);
	
	printf("Enter marks in chemistry out of 200: ");
	scanf("%f", &C);
	
	printf("Enter marks entrance examination out of 100: ");
	scanf("%f", &E);
	
	CM=M/2+P/2+C/2+E;
	printf("Cut off marks=%.2f", CM);
	
	return 0;
}
