// program to convert a lower case character to uppper case character and vice versa:

#include <stdio.h>

int main()
{
	char c;
	printf("Enter any characer :");
	scanf("%c",&c);
	
	(c >= 97 && c <= 122) ? c = c -32 : (c >= 65 && c<= 90) ? c = c + 32 : printf("enter char from a - z only");
	printf("%c", c); 
	return 0;
}
