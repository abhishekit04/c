#include<stdio.h>
int main() {
	double sum = 0.0, average;
	double x[5] = {1.4,-3.5,10,1.1,3.4};
	int i;
	for( i=0; i<5; ++i) {
		sum+= x[i];
	}
	average = sum/5;
	printf("sum = %.2lf\n",sum);
	printf("average=%.2lf\n",average);
	return 0;
}
