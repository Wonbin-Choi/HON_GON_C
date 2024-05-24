#include <stdio.h>
#include <string.h>

int main(void){
	char ani[20];
	char why[80];
	printf("favorite animal : ");
	scanf("%s",ani);
	while(getchar()!='\n');
	printf("reason? : " );
	fgets(why,sizeof(why),stdin);
	why[strlen(why)-1] = '\0';
	printf("%s is %s\n",ani,why);

	return 0;
}
