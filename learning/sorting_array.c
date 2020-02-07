// sorting an array in reverse order.

# include <stdio.h>
# include <stdlib.h>

int main()
{
	int size, i, j;
	printf("Enter the size of the array:");
	scanf("%d", &size);
	int* arr;
	arr = (int*)malloc(size*sizeof(int));
	if(arr == NULL)
	{
		printf(" \n Memory allocation failed...");
		exit(0);
	}
	else
	{
		printf(" \n Enter the elements of the array : ");
		for(i = 0; i< size; i++)
		{
			scanf(" %d", &arr[i]);
		}
		
		for(i = 0; i< size; i++)
		{
			for( j = i+1; j<size; j++)
			{
				if(arr[i] < arr[j])
				{
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		
		for(i = 0 ; i<size; i++)
		{
			printf("%d ", arr[i]);
		}
	}
	return 0;
}
