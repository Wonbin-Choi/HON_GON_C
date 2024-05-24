#include <stdio.h>

int main(void){
	int ch;
	int cnt = 0;
	ch = getchar();

	while(ch!='\n')
	{
		if (ch >= 97 && ch <= 122) cnt++;
		ch = getchar();
	}
	printf("small letters : %d\n",cnt);
	return 0;
}
