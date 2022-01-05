#include <stdio.h>

#define MAX 50

int main()
{
	int i, j, row, column;
	
	printf("enter number of rows\n");
	scanf("%d", &row);
	printf("enter number of columns\n");
	scanf("%d", &column);
	int x[MAX][MAX];
	printf("Enter %d elements\n\n", row * column);
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			scanf("%d", &x[i][j]);
		}
	}
	printf("your matrix is \n\n\n");
	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < column; ++j)
		{
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
	return 0;
}
