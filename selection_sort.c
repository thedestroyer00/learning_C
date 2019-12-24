#include <stdio.h>
#include <stdlib.h>
#define l 16

void selection_sort(int nums[], int n); // not necessary to declare this line 

int main()
{
    int k;
    int nums[l] = {3,54,22,65,1,43,564,21,576,124,52,4,512,7892,9782,965};

    selection_sort(nums,l);
    for(k = 0; k < 16; k++)
    {
        printf("%d ", nums[k]);
    }
    return 0;
}


void selection_sort(int nums[],int size)
{
    int i, j, temp, minposition;
    for(i = 0; i < size; i++)
    {
        minposition = i;
        for(j=i+1; j < size; j++)
        {
            if(nums[j]< nums[minposition])
            {
                minposition = j;
            }
        }
    temp = nums[i];
    nums[i] = nums[minposition];
    nums[minposition] = temp;
    }


}
