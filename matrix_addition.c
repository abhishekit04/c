// addition of two matrices
#include <stdio.h>

int main() {
    int i, j, r, c, a[10][10], b[10][10], sum[10][10];
    printf("Enter number of rows and columns (<=10):");
    scanf("%d%d", &r, &c);
    printf("\nEnter %d elements of the first matrix\n", r*c);
    for ( i = 0; i < r; i++)
        for ( j = 0; j < c; j++)
			scanf("%d", &a[i][j]);
    printf("\nEnter %d elements of the second matrix\n", r*c);
    for ( i = 0; i < r; i++)
    	for ( j = 0; j < c; j++)
        	scanf("%d", &b[i][j]);
    for ( i = 0; i < r; i++)
        for ( j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];
    printf("\nResultant Matrix\n");
    for ( i = 0; i < r; i++) {
        for ( j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
		}
        printf("\n");
	}
    return 0;
}
