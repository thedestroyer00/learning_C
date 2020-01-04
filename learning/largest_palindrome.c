//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3-digit numbers.

#include <stdio.h>
#include <stdlib.h>

int check(int a)
{
    int num1 = a;
    int b = 0;
    while(a>0)
    {
        b =b*10 + a%10;
        a = a/10;
    }
    if(num1 == b)
    {
        return b;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a,b,i,j,num,num1,gnum = 0;
    for(i=100;i<1000;i++)
    {
        for(j=100;j<1000;j++)
        {
            num = i*j;
            num1 = check(num);
            if(num1 > gnum)
            {
                a = i;
                b = j;
                gnum = num1;
            }
        }
    }
    printf("%d * %d = %d is the biggest number",a,b,gnum);
    return 0;

}
