#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
	char *str = (char *)malloc(100);
	gets(str);
	int cnt = 0;
	for(int i=0;i<str[i]!='\0';i++){
		if(isupper(str[i])){
			//if(str[i]>='A' && str[i]<='Z'){ 
			cnt++;
			str[i] = tolower(str[i]);
			//str[i] += ('a' - 'A');
		}
	}
	printf("%s\n",str);
	printf("%d\n",cnt);
	return 0;
}
