// pass value as function arrugument 


#include<stdio.h>

void swap(int x, int y);

int main() {
	int a = 10,b = 20;
	printf("before swap :\t%d \t%d\n",a,b);
	swap(a,b);
}

void swap(int x, int y) {
	int temp = x;x=y;y=temp;
	printf("after swap :\t%d \t%d\n",x,y);
}



//			return pointers from a function

/*we already know we cannot return function, however we can return pointer .*/   
