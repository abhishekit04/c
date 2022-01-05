//Program on while of alphabet

#include<stdio.h>

int main() {
	int i;		// declaration
	i = 65;		// initilization
	while(i<=90) {
		printf("%c ",i);
		i++;
	}
	
	printf("\n\n");
	
	char j;		// declaration
	j = 'a';		// initilization
	while(j<='z') {
		printf("%c ",j);
		j++;
	}	
	return 0;
}
