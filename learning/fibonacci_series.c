#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a =1,b =1, lim;
	printf("Enter the limit of the series: ");
	scanf(" %d", &lim);
	
	while(1)
	{
		if (a <lim)
		{
			printf("%d ", a);
		}
		else
		{
				exit(0);
		}
		if (b < lim)
		{
			printf("%d ", b);
		}
		else
		{
			exit(0);
		}
		a = a + b;
		b = b + a;
	}
	
	
	
	return 0;
}
