// program to find HCF(highest common factor) or GCF(greatest common factor)

#include <stdio.h>

int main()
{
	int i, n1, n2, hcf;
	printf("enter any two numbers : ");
	scanf("%d %d", &n1, &n2);
	
	for(i = 1; i<= n1 && i <= n2; ++i)
	{
		if(n1 % i == 0 && n2 % i ==0)
		{
			hcf = i;
		}
	} 
	printf("%d is hcf of given numbers",hcf);
	return 0;
}
