#include <stdio.h>


int main()
{
    struct book
    {
        char name[10];
        float price;
        int pages;
    };

    struct book b[50];
    int i;
    int dh;
    for (i = 0; i <= 4; i++)
    {
        printf("Enter name, price and pages\n");

        scanf(" %s%f%d", &b[i].name, &b[i].price, &b[i].pages);
    }

    for (i = 0; i <= 4; i++)
    {
        printf(" %s %f %d\n", b[i].name, b[i].price, b[i].pages);
    }
    return 0;
}

