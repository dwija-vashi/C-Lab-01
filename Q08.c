#include<stdio.h>
int main()
{
	int seconds= 31558150, days, hours, mins;
	mins=seconds/60;
	hours=mins/60;
	days=hours/24;
	
	printf("Minutes for one revolution=%d\n", mins);
	printf("Hours for one revolution=%d\n", hours);
	printf("Days for one revolution=%d", days);
	
	return 0;
}
