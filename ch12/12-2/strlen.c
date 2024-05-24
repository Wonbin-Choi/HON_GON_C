#include <stdio.h>

int my_strlen(char *str);

int main(void){
	char str[80] = "strawberry";
	printf("strlen : %d\n",my_strlen(str));
	return 0;
}

int my_strlen(char *str){
	int cnt = 0;
	while(*str != '\0'){
		str++;
		cnt++;
	}
	return cnt;
}
