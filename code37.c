#include<crtdefs.h> //header file
int main()
{ //start bracket
	int n, i;
	printf("Enter N: ");
	scanf("%d", &n);
	
	for(i=2; i<=n; i=i+2) //starting i from 1 with gap of sum=2
		printf("%d ", i);
		
	return 0;
} //end bracket
