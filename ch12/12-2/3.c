#include <stdio.h>
#include <string.h>

int main(void){
	char word[16];
	printf("input : ");
	scanf("%s",word);
	printf("org word : %s, ",word);
	if(strlen(word)>5){
		for(int i=5;i<strlen(word);i++)
			word[i] = '*';
	}
	printf("changed word : %s\n",word);
	return 0;
}
