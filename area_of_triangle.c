#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("\nEnter values of a, b and c : ");
    scanf("%d%d%d", &a, &b, &c);

    int s = (a + b + c) / 2;
    float area_of_triangle = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("\nSemi-perimeter = %d\n", s);
    printf("\nArea of Triangle = %.2f", area_of_triangle);

    return 0;
}