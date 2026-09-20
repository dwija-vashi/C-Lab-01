#include<stdio.h>
int main()
{
	float m1, m2, m3, m4, m5, percentage;
	printf("Enter marks of 5 subjects: ");
	scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
	
	percentage=(m1+m2+m3+m4+m5)*100/500;
	
	if(percentage>=80)
		printf("First division");
	else if(percentage>=60)
		printf("Second division");
	else if(percentage>=35)
		printf("Third division");
	else
		printf("Fail");
		
	return 0;
}
