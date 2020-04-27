

#include <stdio.h>

void fuzzbuzz(int a );

int main()
{
	int num;
	printf("Number : \n");
	scanf("%d",&num);
	fuzzbuzz(num);
	return 0;
}

void fuzzbuzz(int a ){
	if (a%3 == 0 && a%5 == 0){
		printf("FuzzBuzz");
	}
	else{
		a %3 == 0 ? printf("Fuzz") : a%5 == 0 ? printf("Buzz") : printf("%d", a);
	}
}
