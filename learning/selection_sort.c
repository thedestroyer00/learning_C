#include <stdio.h>
#include <stdlib.h>
#define l 10



int main()
{
    int k, nums[l];
    enter_array(nums,l);

    selection_sort(nums,l);
    for(k = 0; k < l; k++)
    {
        printf("%d ", nums[k]);
    }
    return 0;
}

void enter_array(int arr[],int n)
{
    int i;
    printf("Enter elements of the array : ");
    for(i = 0; i < n; i++)
    {
       scanf("%d", &arr[i]);
    }
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
