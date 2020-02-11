// To display the sum of two complex numbers : 

# include <stdio.h>
# include <stdlib.h>

typedef struct complex{
	int real;
	int img;
} c ;

int sum(int *p, c c1, c c2)
{
	*p = c1.real + c2.real;
	*(p+1) = c1.img + c2.img;
}

int main()
{
	int *p = calloc(2, sizeof(int));
	c c1, c2;
	printf("Enter the real part of first number: ");
	scanf(" %d", &c1.real);
	printf("Enter the imaginalry par of first number: ");
	scanf(" %d", &c1.img);
	printf("Enter the real part of first number: ");
	scanf(" %d", &c2.real);
	printf("Enter the imaginalry par of first number: ");
	scanf(" %d", &c2.img);
	
	sum(p, c1,c2);
	printf("%d %d", *p, *(p+1));
	
	
	return 0;
}
