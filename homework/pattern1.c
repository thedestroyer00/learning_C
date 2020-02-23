// To print the following pattern :
/*
		1
	   121
	  12321
	 1234321
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
			printf("%d",j);
		}
		for(k = i-1; k>=1; k--)
		{
			printf("%d", k);
		}		
		printf("\n");	
	}
}
