#include<stdio.h>
#include<conio.h>

int main() {
	float weight,height,BMI;
	printf("Enter the weight in kg and height in meter\n");
	scanf("%f%f",&weight,&height);
	
	BMI = weight/(height*height);
	
	printf("%f\n\n\n",BMI);
	
	if(BMI>=25) {
		printf("you are overweight\n");
	}
	else if(BMI>=15) {
		printf("you are Normal\n");
	}
	else {
		printf("you are underweight\n");
	} 
	
	getch();
	return 0;
	
}
