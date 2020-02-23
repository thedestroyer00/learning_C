// To find the sum of digits of given number using recursion:

# include <stdio.h>

int sum(int a);

int main()
{
	int x, s;
	printf("Enter any number :");
	scanf(" %d", &x);
	s = sum(x);
	printf("%d", s);
	return 0;
}

int sum(int a){
	if ( a < 10)
	{
		return a;
	}
	else{
		return (a%10 + sum(a/10));
	}
}
