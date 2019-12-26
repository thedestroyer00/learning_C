#include <stdio.h>

int main() 
{	int x;
	printf("enter any number : ");
	scanf("%d",&x);
	
	(x%11!=0) ? (x%5==0) ? printf("the number is divisible by 5 only") : printf("The number is not divisible by 5") : printf("not divisible");
	
	return 0;
	
}

// Note ; sign most be used at last of the ternary operator only 
