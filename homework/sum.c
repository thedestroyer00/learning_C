// find the sum of first and last digit of a entered number.


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, sum, last;
	
	printf("enter any number : ");
	scanf("%d",&n);
	
	if(n < 10)
	{
		sum = n;
	}
		
	else
	{
		last = n%10;
		while(n >= 10)
		{
				n = n / 10;
		}
		sum = n + last;
	}
		
	printf("%d", sum);
	return 0;

	
}	
