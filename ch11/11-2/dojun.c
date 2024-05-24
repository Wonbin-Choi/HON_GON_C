#include <stdio.h>

int main(void){
	char ch;
	int max = 0;
	int cnt = 0;
	do{
		ch = getchar();
		if(ch == '\n'){
			if(cnt >= max) max = cnt;
			cnt = 0;
		}
		else cnt++;
	}while(ch != 'q');
	printf("longgest word len : %d\n",max);
	return 0;
}

