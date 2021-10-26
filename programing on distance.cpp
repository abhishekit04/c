//programing on distance //

#include<stdio.h> 
#include<conio.h>

int main () {
	float  km, m, cm, ft, inch;
	printf("Enter distance in kilometer");
	scanf("%f",&km);
	m = km*1000;
	cm = m*100;
	inch = cm * (1/2.54);
	ft = inch * (1/(float)12);
	 
	printf("%.2f kilometers = %.2f meters = %.2f centimetrs = %.2f feets = %.2f inches",km, m, cm, ft, inch);
	return 0;
}
