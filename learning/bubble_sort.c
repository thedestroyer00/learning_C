#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j,temp, nums[10] = {5,4,2,3,43,54,12,1,34,21};
    for(i= 0; i <10; i++)
    {
        for(j = i+1; j<10; j++)
        {
            if(nums[i]>nums[j])
            {
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;

            }
        }
    }
    for(int k = 0; k<10; k++)
    {
        printf("%d ", nums[k]);

    }
    return 0;

}
