#include<stdio.h>

int main () {
	int data[6];
	int i;
	printf("enter six element\n");
	for(i=0;i<6;i++) {
		printf("enter %d  element\n",i);
		scanf("%d",&data[i]);
	}
	printf("second element = %d\n", data[1]);
	printf("fifth element = %d\n", data[4]); 
 	data[1]=100;
 	data[4]=80;
 	printf("second element = %d\n", data[1]);
	printf("fifth element = %d\n", data[4]); 
	printf("printing every element of an array\n");
	for(i=0;i<6;i++) {
		printf("value at %d index is %d\n",i,data[i]);
	}
	return 0;
}
