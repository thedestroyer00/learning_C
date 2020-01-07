// find the nth term of the fibonacci series (1,1,2,3,5.......) : 

#include <stdio.h>
#include <stdlib.h>

int fibo(int a)
{
    if(a == 0)
    {
        return 0;
    }
    else if(a == 1)
    {
        return 1;
    }
    else
    {
        return (fibo(a-1) + fibo(a-2));
    }
}

int main()
{
    int a;
    printf("Enter the nth term of the series : ");
    scanf("%d",&a);
    int f = fibo(a);
    printf("%d",f);
    return 0;
}
