#include <stdio.h> 

int fact(int a) {
	if(a == 0)
	{
	return 0;
	}
	else
	{
	return a*fact(a-1);
	}
	
int main()
{
	int a, f;
	printf("enter any number : ");
	scanf("%d", &a);
	
	f = fact(a);
	printf("%d is the factorial of %d", f, a);
	
	return 0;
	
}
	
