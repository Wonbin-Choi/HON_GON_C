#include <stdio.h>

int main(){
#if 0
	int arr[5];
	float arr2[10];
	int arr3[] = {1,2,3};
	char arr4[4];
#endif
	int arr[6] = {1,2,3,0,};
	for(int i=0;i<6;i++) printf("%5d",arr[i]);	
	return 0;
}
