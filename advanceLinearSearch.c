#include <stdio.h>

int main()
{
	int arr[] = {1, 2, 3, 4, 6, 3, 4, 3, 4, 12, 2, 0, 19};
	int length_of_array = sizeof(arr)/sizeof(int);
	printf("%d\n",length_of_array);
	int i, num, count = 0;
	for (i = 0; i < 9; i++)
		printf("%d ", arr[i]);

	printf("\nEnter the element you want to find:");
	scanf("%d", &num);

	for ( i = 0; i < 9; i++)
	{
		if(arr[i] == num) {
			printf("Found at %d\n",i);
			count++;
		}
	}

	if(count == 0) {
		printf("Element not present in the array");
	}

	return 0;

}
