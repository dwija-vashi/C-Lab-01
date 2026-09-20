#include<stdio.h> //header file
int main()
{ //start bracket
	int i, n; 
	printf("Enter N: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i=i+2) //adding i starting from 1 and gap of sum=2
		printf("%d ", i);
		
	return 0;
} //end bracket
