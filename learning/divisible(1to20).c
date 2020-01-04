// Program to find the smallest number divisible by numbers from 1 to 20:


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count, i,num = 20;

    while(count != 20)
    {
        count = 0;
        for(i=1; i<=20; i++)
        {
            if(num%i==0)
            {
                count++;
            }
            else
            {
                count = 0;
                num++;
            }
        }
    }
    printf("%d is the smallest number divisible by numbers from 1 to 20",num);

    return 0;

}
