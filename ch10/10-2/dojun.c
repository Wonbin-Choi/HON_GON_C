#include <stdio.h>

void input_nums(int * lotto_nums);
void print_nums(int * lotto_nums);

int main(void){
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);

	return 0;
}

void input_nums(int * lotto_nums){
	int num;
	char flag;
	for(int i=0;i<6;){
		flag = 0;
		printf("put numbers : ");
		scanf("%d",&num);
		for(int j=0;j<i;j++){
			if(num == lotto_nums[j]){
				printf("same number is here\n");
				flag = 1;
				break;
			}
		}
		if(flag) continue;
		lotto_nums[i++] = num;

	}
}
void print_nums(int * lotto_nums){
	printf("lotto numbers :  ");
	for(int i=0;i<6;i++){
		printf("%d  ",lotto_nums[i]);
	}
	printf("\n");
}
