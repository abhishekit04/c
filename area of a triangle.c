// Program to find area of  a triangle

#include<stdio.h>
#include<conio.h>

int main () {
	float height, base, area;
	printf("Enter height and base to find area of triangle :\n");
	scanf("%f %f", &height, &base);
	area = 0.5*base*height;
	
	printf("Area of Triangle =  %.2f", area);
	
	return 0;
	
}
	