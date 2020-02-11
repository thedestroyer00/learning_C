// add to strings without using function : 

# include <stdio.h>
# include <string.h>

int main()
{
	char first[] = "add two", last[] = "strings";
	int len = strlen(first) + strlen(last) + 1; // + 1 to add between name and last 
	char full[len]; // declaring a new string 
	int i;
	for(i = 0; i<strlen(first); i++)
	{
		full[i] = first[i];
	}
	full[strlen(first)] = ' '; // adding space between name and last 
	for(i = 1; i<=strlen(last); i++)
	{
		full[strlen(first)+i] = last[i-1];
	}
	printf("%s", full);
	
	return 0;	
}
