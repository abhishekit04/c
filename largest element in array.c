//write a program to find the largest element in an array

#include<stdio.h>

int main() {
	int element[] = {12,0,1,45,7,4,10,5,8,6,13,2,4},i,length;
	length = sizeof(element)/sizeof(element[0]);
	printf("size of a array = %d\n",length);
	
//	printf("%d %d %d %d %d\n",element[0],element[1],element[2],element[3],element[4]);

for(i=0; i<length; i++) {
	printf("%d\n",element[i]);
}

for(i=0; i<length; i++) {
	if(element[0]<element[i]) {
		element[0] = element[i];
	}
}
	printf("\n greatest number = %d",element[0]);	
	return 0;
}
