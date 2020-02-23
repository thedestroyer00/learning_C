// To print the following pattern: 
/*
	    *
	   * *
	  * * *
	 * * * *
*/

# include <stdio.h>
# include <stdlib.h>

int main()
{
	int i,j,k;
	for(i = 1; i<5; i++)
	{
		for(k = 4-i; k>0; k--)
		{
			printf(" ");	
		}
		for(j =1; j<= i; j++)
		{
			int l = j;
			printf(" %c",'*');
		}
				
		printf("\n");	
	}
}
