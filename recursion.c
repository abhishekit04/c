#include<stdio.h>

int main() {
	fun(1); 	
	
	
	return 0;
}
void fun(int a) {  
	printf("%d",a);
	if (a) {  
		fun(a-1);
	}
	printf("%d",a);
}


