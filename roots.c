// program to calculate the roots of the quadratic equations

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;
    float r1,r2,d;

    printf("Enter the coefficients of the quadratic equation : ");
    scanf("%d %d %d", &a,&b,&c);

    d = (b*b - (4*a*c));
    if(d == 0)
    {
        printf("%d is the roots of the equation",b);
    }
    else if(d < 0)
    {
        printf("The roots are imaginary");
    }
    else
    {

        r1 = (b - sqrt(d))/(2*a);
        r2 = (b + sqrt(d))/(2*a);

        printf("%f %f are the two roots of the quadratic equation",r1,r2);
    }

    return 0;
}
