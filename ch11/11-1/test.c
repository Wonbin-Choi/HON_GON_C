#include <stdio.h>

int main(void){
	char ch1;
	char ch2[4];
	char ch3[4];

	printf("first try : ");
	scanf("%c",&ch1);
	printf("%c\n",ch1);

	while(getchar()!='\n');

	printf("second try : ");
	fgets(ch2,sizeof(ch2),stdin);
	printf("%s",ch2);

	printf("third try : ");
	fgets(ch3,sizeof(ch3),stdin);
	printf("%s",ch3);

	return 0;
}
