// this program prints the primenumber upto given upper limit....
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j,end, isprime;
    printf("please enter the upper limit of a range : ");
    scanf("%d", &end);
    for(i=1; i<= end; i++){
        isprime = 0;
        if(i > 1){
            for(j = 2; j<i; j++){
                if(i%j == 0){
                    isprime = 0;
                    break;
                    }
                else{
                    isprime = 1;
                }
                }
            }
        if(isprime == 1){
            printf("%d ", i);
        }

    }

        return 0;
    }

