//Program to convert give days into years-months-days format


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int givendays;
    printf("enter the given days : ");
    scanf("%d", &givendays);
    int years,remain_days, months, days;

    if(givendays > 365){

        years = givendays / 365;
        printf("%d years ", years);
        remain_days = givendays % 365;
        //printf("%d", remain_days);
        months = remain_days / 30;
        printf("%d months ", months);
        days = remain_days % 30;
        printf("%d days ", days);

    }
    else if(30 <= givendays < 365){

        printf("0 years ");
        remain_days = givendays;
        months = remain_days / 30;
        printf("%d months ", months);
        days = remain_days % 30;
        printf("%d days", days);

    }
   else if( givendays < 30){
    printf("0 years 0 months %d days ", givendays);
   }
       return 0;
    }
