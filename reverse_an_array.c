#include <stdio.h>

int main()
{
    int n;
    printf("how many elements do you want to reverse? : ");
    scanf("%d", &n);
    int arr1[n], arr2[n], i, j;
    printf("\nEnter %d elements of array:\n", n);
    for (i = 0; i <= n - 1; i++)
        scanf("%d", &arr1[i]);
    for (i = 0, j = n - 1; i <= n - 1; i++, j--)
        arr2[j] = arr1[i];
    printf("elements in reverse order:\n");
    for (i = 0; i <= n - 1; i++)
        printf("%d ", arr2[i]);
    return 0;
}