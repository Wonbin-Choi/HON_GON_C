#include <stdio.h>
#include <string.h>

int main(void){
	char word[3][80];

	printf("three word input : ");
	scanf("%s %s %s",word[0],word[1],word[2]);
	char temp[80];
	for(int i=0;i<2;i++){
		for(int j=i;j<3;j++){
			if(strcmp(word[i], word[j])>0){
				strcpy(temp,word[i]);
				strcpy(word[i],word[j]);
				strcpy(word[j],temp);
			}
		}
	}
	printf("%s, %s, %s\n",word[0],word[1],word[2]);
	return 0;
}
