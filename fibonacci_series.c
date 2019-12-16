#include <stdio.h>

int main()
{
	int a = 0, b = 1, lim;
	printf("enter the limit of the series : ");
	scanf("%d", &lim);
	
	while( a <= lim || b <= lim)
	{
		printf("%d %d ", a,b);
		a = a + b;
		b = b + a;
	}
	
	return 0;
	
}
