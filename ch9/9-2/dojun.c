#include <stdio.h>

void swap(double *pa, double *pb);
void line_up(double *maxp, double *midp, double *minp);

int main(void){
	double max,mid,min;

	printf("3 float input: ");
	scanf("%lf%lf%lf",&max,&mid,&min);
	line_up(&max,&mid,&min);
	printf("answer : %.1lf, %.1lf, %.1lf\n",max,mid,min);

	return 0;
}

void swap(double *pa, double *pb){
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double *maxp, double *midp, double *minp){
	double *arr[] = {maxp,midp,minp};
	for(int i=0;i<2;i++){
		for(int j=0;j<2-i;j++){
			if(*arr[j] < *arr[j+1])
				swap(arr[j],arr[j+1]);
		}
	}
}
