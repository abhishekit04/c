#include <stdio.h>
#include "functions.h"

int main() {

    int x = 5 , y = 10;

    // int sum = getSum(x, y);
    // printf("%d\n", sum);

    // int difference = getDifference(5, 4);
    // printf("%d\n", difference);

    // float quotent = getQuotent(x,y);
    // printf("%.2f\n\n", quotent);

    // int remainder = getRemainder(11, 4);
    // printf("%d\n\n",remainder);


    float temp  = 100;
    
    float fah_temp = CeltoFah(temp);
    printf("\n%.2f",fah_temp);

    float cel_temp = FahtoCel(temp);
    printf("\n%.2f",cel_temp);


    return 0;
}

