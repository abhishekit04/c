//there are four types of user define function

//1 without return and without parameter

#include<stdio.h>
void greater();
int main() {
	greater();
	return 0;
}
void greater() {
	int i,j;
	printf("enter 2 numbers that you want to compare\n");
	scanf("%d%d",&i,&j);
	if(i>j) {
	printf("the greater number is : %d",i);
	}		
	else{
	printf("the greater number is : %d",j);
	}
}





