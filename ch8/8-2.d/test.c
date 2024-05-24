#include <stdio.h>
#include <string.h>

int main(void){
	char city[7];
	char dest[80];
	char name[80];

	printf(" where live? : ");
	fgets(city,sizeof(city),stdin);

	while(getchar()!='\n');
	printf(" where you want go? : ");
	fgets(dest,sizeof(dest),stdin);
//	while(getchar()!='\n');
//	printf(" your name? : ");
//	fgets(name,sizeof(name),stdin);
	
	city[strlen(city)-1] = '\0';
	dest[strlen(dest)-1] = '\0';
//	name[strlen(name)-1] = '\0';

	printf("you live in %s and you want to go %s.\n",city,dest);

	return 0;
}
