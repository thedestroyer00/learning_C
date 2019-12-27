//program to print the following pattern

/*
		***** *****
		 **** ****
		  *** ***
		   ** ** 
		    * *

*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i,j,k,l;

    for(i=0;i<=5;i++)
    {
        for(j= 0;j <= i; j++)
        {
            printf(" ");
        }
        for(k = 5-i; k>=0; k--)
        {
            printf("*");
        }
        printf("  ");
        for(l = 5-i; l >= 0; l--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
