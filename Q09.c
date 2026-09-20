#include<stdio.h>
int main()
{
	int hour, min, sec, ts;
	printf("Enter time in hours, minutes, seconds: ");
	scanf("%d %d %d", &hour, &min, &sec);
	
	ts=hour*3600+min*60+sec;
	printf("Total time in seconds=%d", ts);
	
	return 0;
}
