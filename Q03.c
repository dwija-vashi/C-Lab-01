#include<stdio.h>
int main()
{
	int grosssalary, basicsalary, HRA, otherallowances;
	printf("Enter basic salary: ");
	scanf("%d", &basicsalary);
	
	printf("Enter HRA: ");
	scanf("%d", &HRA);
	
	printf("Enter otherallowances: ");
	scanf("%d", &otherallowances);
	
	grosssalary=basicsalary+HRA+otherallowances;
	printf("Gross salary=%d", grosssalary);
	
	return 0;
}
