// program to print the following pattern 
/*
			    * *
			   ** **
			  *** ***
			 **** ****
			***** *****

*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i,j,k,l;

    for(i=0;i<=5;i++)
    {
        for(j= 5-i;j>0; j--)
        {
            printf(" ");
        }
        for(k = 0; k <=i; k++)
        {
            printf("*");
        }
        printf("  ");
        for(l = 0; l <= i; l++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
