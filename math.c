// program to find square,cube,quartet
#include<stdio.h>
#include<math.h>

int main() {
	int num ;
	printf("enter a number to find its square , cube , quartet\n");
	scanf("%d",&num);
	int square = pow(num,2);
	printf("square of %d = %d\n",num,square);
	int cube = pow(num,3);
	printf("cube of %d = %d\n",num,cube);
	int quartet = pow(num,4);
	printf("quartet of %d = %d\n",num,quartet);
	
	return 0;
	
}
