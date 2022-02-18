#include<stdio.h>

#define AREA(x)(3.14*x*x)
#define AREA_OF_RECTANGLE(y,z) (y*z)


float area_of_circle(float r) {
    return (3.14 * r * r);
}


int main() {
    float r1=6.25,r2=2.5, a, l= 12, b = 12;
    a=AREA(r1);
    printf("Area of circle=%f\n",a);
    a = AREA (r2);
    printf("Area of circle =%f\n",a);


    a = AREA_OF_RECTANGLE(l,b);
    printf("Area of Rectangle = %.2f\n",a);

    printf("%f\n", area_of_circle(r1));

    return 0;

}
