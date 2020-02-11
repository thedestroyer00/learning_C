// To find the total working period in a day:

# include <stdio.h>

typedef struct time{
	int hour;
	int min;
	int sec;
} time;

int main()
{
	time start, end, period;
	
	printf("Enter the starting time in (hr min sec) format: ");
	scanf(" %d %d %d", &start.hour, &start.min, &start.sec);
	
	printf("Enter the ending time in (hr min sec) format:");
	scanf(" %d %d %d",&end.hour,&end.min, &end.sec);
	
	if(end.hour < start.hour)
	{
		end.hour += 12;
	}
	
	period.hour = end.hour - start.hour;
	period.min = end.min - start.min;
	period.sec = end.sec - start.sec;
	
	if(period.sec < 0)
	{
		period.min -= 1;
		period.sec += 60;
	}
	
	if(period.min < 0)
	{
		period.hour -= 1;
		period.min += 60;	
	}
	
	printf("Total lab period = %d hour(s) %d minute(s) %d second(s)", period.hour, period.min, period.sec);
	
	
}
