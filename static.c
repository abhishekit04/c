#include <stdio.h>

void increment();    // proto-type of function

int main()
{
    increment();
    increment();
    increment();
    increment();
    
    return 0;
}

void increment() {
    auto int i=1;
    static int j=1;
    i=i+1;
    j=j+1;
    printf("%d%d\n",i,j);

}