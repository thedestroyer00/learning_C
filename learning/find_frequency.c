/*
Given a string, s, consisting of alphabets and digits, find the frequency of each digit in the given string.
sample input : a11472o5t6

print ten space-separated integers in a single line denoting the frequency of each digit from 0 to 9 .
sample output: 0 2 1 0 1 1 1 1 0 0 
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void update_list(int nums[],char letter){
    
    switch (letter){
        case '0':
        nums[0]++;
        break;
        case '1':
        nums[1]++ ;
        break;
        case '2':
        nums[2]++;
        break;
        case '3':
        nums[3]++;
        break;
        case '4':
        nums[4]++;
        break;
        case '5':
        nums[5]++;
        break;
        case '6':
        nums[6]++;
        break;
        case '7':
        nums[7]++;
        break;
        case '8':
        nums[8]++;
        break;
        case '9':
        nums[9]++;
        break;
    }
   }
   

int main() {

    char word[1000];
    int count[10] = {0,0,0,0,0,0,0,0,0,0};
    printf("%s", "Enter the word:");
    fgets(word, 1000, stdin);
    int i, length = strlen(word);

    for (i = 0; i< length;i++){
        update_list(count, word[i]);

    }
    
    for (i =0; i<10;i++){
		printf("%d ", count[i]);
	}	
	
    return 0;
}

