#include <stdio.h>

int main()
{
	int arr[5] = {1, 2, 3, 4, 3}, i, num;
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);

	printf("\nEnter the element you want to find:");
	scanf("%d", &num);
	// printf("%d", num);

	for ( i = 0; i < 5; i++)
	{
		if(arr[i] == num) {
			printf("Found at %d",i);
			break;
		}
	}

	if(i == 5) {
		printf("Element not present in the array");
	}

	return 0;
	
}
