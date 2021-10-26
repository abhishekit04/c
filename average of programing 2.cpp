#include<stdio.h>

int main () {
	int english , hindi , maths , science , social_science , total;
	float percentage;
	english = 54;
	hindi = 86;
	maths = 84;
	science = 95;
	social_science = 70;
	total = english + hindi + maths + science + social_science;
	percentage= total/(float)5;
	
	printf("percentage = %.2f" , percentage);
	
	return 0 ;
}
