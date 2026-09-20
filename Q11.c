#include<stdio.h>
int main()
{
	int ts, hrs, mins, secs;
	printf("Enter total seconds: ");
	scanf("%d", &ts);
	
	hrs=ts/3600;
	ts=ts%3600;
	
	mins=ts/60;
	secs=ts%60;
	
	printf("Time=%d hours %d minutes %d seconds", hrs, mins, secs);
	
	return 0;
}
