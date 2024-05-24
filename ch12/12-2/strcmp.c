#include <stdio.h>

int my_strcmp(char *str1,char *str2);

int main(void){
	char str1[80] = "apple";
	char str2[80] = "apple";
	printf("strcmp : %d\n",my_strcmp(str2,str1));
	return 0;
}

int my_strcmp(char *str1, char *str2){
	while((*str1 == *str2) && (*str1 != '\0')){
		str1++;
		str2++;
	}
	if(*str1>*str2)
		return 1;
	else if(*str1<*str2)
		return -1;
	return 0;
}
