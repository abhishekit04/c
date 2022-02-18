#include<stdio.h>
//
//void number () {
//	int num = 72;
//}
 
//	number();
//	printf("num = %d", num);
//	return 0;
//}
	int main() {
int a = 5, b = 8, c = 2;
int result = a > b ? a : (b % c == 0 ? b : c);
	printf("%d", result);
}

