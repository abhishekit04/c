#include<graphics.h>
#include<conio.h>
#include<stdio.h>

int main() {
		int x = 200, y = 300, radius;

		int i;

		int gm = DETECT,gd;


		initgraph(&gm,&gd,"C:\\TC\\BGI");
	       //printf("circle");
		setcolor(GREEN);
		outtextxy(250,30,"CONCENTRIC CIRCLES");
		setcolor(WHITE);


		for(i=25;i<=125;i=i+20){
			circle(x,y,i);
		}
		x=450,y=300;
		for(i=30;i<=100;i=i+15){
			circle(x,y,i);
		}
		getch();
		closegraph();
		return 0;

}
