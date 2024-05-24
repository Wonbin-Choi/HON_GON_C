#include <stdio.h>
void my_gets(char *ps);
int main(void){
	int i = 0;
	char str[20];
	my_gets(str);
	printf("%s\n",str);
	return 0;
}
void my_gets(char *ps){
	char ch;
	while((ch = getchar()) != '\n'){
		*ps = ch;
		ps++;
	}
	*ps = '\0';
}
