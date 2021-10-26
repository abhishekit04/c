//programing on rectangle //

#include<stdio.h>
#include<conio.h>

int main () {
	float area , perimeter , length , breath ;
	printf("Enter length and breath of rectangle :\n");
	scanf("%f%f", &length , &breath);
	
	area = length*breath ;
	perimeter = 2*(length+breath) ;
	
	printf("Area of Rectangle = %f \n", area);
	printf("Perimeter of Rectangle = %f\n", perimeter);
	
	getch();
	
	return 0;
}
