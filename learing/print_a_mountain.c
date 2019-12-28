/* print a mountain using c programm like 

*
**
***
****
*****
****
***
**
*

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j;
    char c = '*';
    for(i=1; i<= 10; i++){
        if(i<5){
        for(j=1;j<=i; j++){
            printf("%c",c);
        }
        printf("\n");
        }
        else{
            for(j = i; j<=10; j++){
                printf("%c", c);
            }
            printf("\n");
        }

    }
    return 0;
    }


