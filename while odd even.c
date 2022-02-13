//Program on while 

#include<stdio.h>

int main() {
	int i=2;
	while(i%2 == 0) {
		printf("%d\n",i);
		if(i==2) {
			break;	
		}
		i++;
	}
	return 0;
}
