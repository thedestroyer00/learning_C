// To print all the combination of the given string: 

# include <stdio.h>
# include <string.h>

void swap(char *x, char *y){
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}


void permuit(char *a, int l, int r){
	int i;
	if (l == r)
	{
		printf("\n %s", a);
	}
	else{
		for(i =l ; i<= r; i++)
		{
			swap((a+l),(a+i));
			permuit(a, l+1,r);
			swap((a+l),(a+i));
		}
	}
}

int main()
{
	char text[] = "done";
	int n = strlen(text);
	permuit(text, 0, n-1);
	return 0;
}
