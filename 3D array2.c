#include<stdio.h>

int main () {
	int arr[2] [3] [4];  //24
	int i,j,k;
	for(i=0;i<2;i++){
		for(j=0;i<3;j++){
			for(k=0;k<4;k++){
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;i<3;j++){
			for(k=0;k<4;k++){
				printf("%d",arr[i][j][k]);
			}
		}
	}
}
