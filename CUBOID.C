#include<graphics.h>
#include<conio.h>
#include<stdio.h>

int main() {
	int i;
	int gm = DETECT,gd;
	initgraph(&gm,&gd,"C:\\TC\\BGI");


       	rectangle(100,100,300,300);
       	rectangle(0,0,200,200);
       	line(0,0,100,100);
       	line(200,0,300,100);
       	line(0,200,100,300);
       	line(200,200,300,300);
		
	getch();
	closegraph();
	return 0;

}
