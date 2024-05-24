#include <stdio.h>

char *my_strcat(char *str1, char *str2);

int main(void){
	char str[80] = "strawberry";
	printf("not changed : %s\n",str);
	my_strcat(str,"apple");
	printf("changed : %s\n",str);
	printf("changed2 : %s\n",my_strcat(str,"kiwi"));
	return 0;
}

char * my_strcat(char *str1, char *str2){
	char *temp = str1;
	while(*str1 != '\0')
		str1++;
	while(*str2 != '\0'){
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
	return temp;
}
