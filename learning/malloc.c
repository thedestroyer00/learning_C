// Dynamic memory allocation in c using malloc 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n=5;
    int* p;

    p = (int*)malloc(n*sizeof(int));

    if(p==NULL)
    {
        printf("memory allocation failed...");
        exit(0);
    }
    else
    {
        for(i = 0; i<n; ++i)
        {
            p[i] = i+1;
        }
        for(i = 0; i<n; ++i)
        {
        printf("%d",p[i]);
        }

    }

    return 0;

}
