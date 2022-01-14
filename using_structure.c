#include<stdio.h>
int main() {
    char name[3];
    float price[3];
    int pages[3],i;
    
    printf("enter name prices and no. of pages of 3 books\n");
    for (i=0;i<3;i++) {
        scanf(" %c%f%d",&name[i],&price[i],&pages[i]);
    }
    printf("and this what your entered\n");
    for(i=0;i<3;i++) {
        printf(" %c\t%.2f\t%d\n",name[i],price[i],pages[i]);
    }
    return 0;
}