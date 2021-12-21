#include<stdio.h>

int main () {
	int arr [2] [3] [3] = {
		{{10,20,30},{40,50,60},{70,80,90}},
		{{11,22,33},{44,55,66},{77,88,99}}
	};
	
	int i,j,k;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				printf("%d ",arr[i][j][k]);
				if(k==3) {
					printf("\n");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
}
