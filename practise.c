#include<stdio.h>

int main() {
	int n=1;
	while(n<=50) {
		if(n%2 == 0) {
			printf("%d\n",n);
		}
		n++;
	}
	
	return 0;
}
