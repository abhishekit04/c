#include<stdio.h>
#include<conio.h>
#include"functions.h"

int main () {
	float cal_gst = GST();
	printf("gst = %f",cal_gst);
	
	float result = getProduct(3,5);
	printf("result = %f",result);
	return 0;
}
