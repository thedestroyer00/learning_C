/* program to print the following pattern 
ASCOL
ASCO
ASC
AS
A
AS
ASC
ASCO
ASCOL
*/

#include <stdio.h>

int main()
{
	char name[5]= "ASCOL";
	int i,j;
	
	for(i = 10; i>0; i--)
	{
		if (i >5){
		for(j = 0; j<i-5; j++ )
		{
			printf("%c", name[j]);
		}
		printf("\n");
	}
		else if(i < 5)
		{
			for(j = 0; j<6-i ; j++)
			{
				printf("%c", name[j]);
			}
			printf("\n");
		}
	
		
	}
	
	return 0;
	
}
