#include<graphics.h>
#include<conio.h>
#include<stdio.h>

int main() {
	int i;
	int gm = DETECT,gd;

	initgraph(&gm,&gd,"C:\\TC\\BGI");


	line(200,200,200,400);
	line(200,400,400,400);
	line(400,400,400,200);
	line(200,200,400,200);



	rectangle(400,50,500,100);
	getch();
	closegraph();
	return 0;

}
