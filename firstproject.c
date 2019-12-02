//Program to convert give days into years-months-days format


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int days, years, months, day, remain_day;
    printf("enter the number of days : ");
    scanf("%d", &days);
    
    years = days/ 365;
    remain_day = days%365;
    months = remain_day/30;
    day = remain_day%30;
    
    printf("%d years %d months %d days", years, months, day);
    return 0;
}
