#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define MAX 10

void addq(int *, int, int *, int *);

int delq(int *, int *, int *);

int main()
{
    int arr[MAX];
    int front = -1, rear = -1, i;

    system("cls");

    addq(arr, 23, &front, &rear);
    addq(arr, 9, &front, &rear);
    addq(arr, 11, &front, &rear);
    addq(arr, -10, &front, &rear);
    addq(arr, 25, &front, &rear);
    addq(arr, 16, &front, &rear);
    addq(arr, 17, &front, &rear);
    addq(arr, 22, &front, &rear);
    addq(arr, 19, &front, &rear);
    addq(arr, 30, &front, &rear);
    addq(arr, 32, &front, &rear);
    addq(arr, 67, &front, &rear);

    i = delq(arr, &front, &rear);
    if (i != NULL)
        printf("item deleted:%d\n", i);

    i = delq(arr, &front, &rear);
    if (i != NULL)
        printf("item deleted:%d\n", i);

    i = delq(arr, &front, &rear);

    if (i != NULL)
        printf("item deleted:%d\n", i);

    i = delq(arr, &front, &rear);
    if (i != NULL)
        printf("item deleted:%d\n", i);


    return 0;
}

void addq(int *arr, int item, int *pfront, int *prear)
{
    if (*prear == MAX - 1)
    {
        printf("queue is full.\n");
        return;
    }

    (*prear)++;
    arr[*prear] = item;

    if (*pfront == -1)
        *pfront = 0;
}

int delq(int *arr, int *pfront, int *prear)
{
    int data;

    if (*pfront == -1)
    {
        printf("Queue is empty.\n");
        return NULL;
    }

    data = arr[*pfront];
    arr[*pfront] = 0;

    if (*pfront == *prear)
        *pfront = *prear = -1;

    else
        (*pfront)++;

    return data;
}