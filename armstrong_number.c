#include <stdio.h>

int main() 
{	int num, number, n,s, sum = 0;
	
	printf("Enter any number :");
	scanf("%d", &num);
	number = num;
	
	while(num != 0)
	{
		n = num % 10;
		s = n*n*n;
		sum = sum + s;
		num = num / 10;
	}
	
	if(sum == number)
	{
		printf("the number is armstrong number");
	}
	
	else
	{
		printf("the number is not armstrong number");
		
	}
	
	return 0;
	
}
