#include<stdio.h>
int main()
{
	int m1, m2, m3, m4, m5;
	float total, percentage;
	printf("Enter marks of student 1: ");
	scanf("%d", &m1);
	
	printf("Enter marks of student 2: ");
	scanf("%d", &m2);
	
	printf("Enter marks of student 3: ");
	scanf("%d", &m3);
	
	printf("Enter marks of student 4: ");
	scanf("%d", &m4);
	
	printf("Enter marks of student 5: ");
	scanf("%d", &m5);
	
	total=m1+m2+m3+m4+m5;
	percentage=total*100/500;
	printf("Total marks=%.2f\n", total);
	printf("Percentage of marks=%.2f", percentage);
	
	return 0;
}
