/* Here a program to print a certain ceries of number
example : if 7 is entered you will get the following series 
7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1 */

# include <stdio.h>

int main()
{
	int i;
	printf("enter any number : ");
	scanf("%d", &i);
	printf("%d ", i);
	
	while(i > 1)
	{
		if(i % 2 == 0)
		{
			i = i/2;
			printf("%d ", i);
		}
		else
		{
			i = (i * 3) + 1;
			printf("%d ", i);
		}
	}
	return 0;
}
