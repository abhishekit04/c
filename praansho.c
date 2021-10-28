#include<graphics.h>
#include<conio.h>
#include<stdio.h>

int main() {
		int i;
		int gm = DETECT,gd;


		initgraph(&gm,&gd,"C:\\TC\\BGI");
		
		line(0,25,0,75);
		rectangle(0,25,25,50);
		line(50,25,50,75);
		rectangle(50,25,75,50);
		line(50,50,75,75);
		line(125,25,100,75);
		line(125,25,150,75);
		line(112,50,137,50);
		line(187,50,212,50);
		line(200,25,175,75);
		line(200,25,225,75);
		line(250,25,250,75);
		line(250,25,275,75);
		line(275,25,275,75);
		line(300,25,325,25);
		line(300,50,325,50);
		line(300,75,325,75);
		line(300,25,300,50);
		line(325,50,325,75);
		line(350,25,350,75);
		line(375,25,375,75);
		line(350,50,375,50);
		circle(425,50,25);


		getch();
		closegraph();
		return 0;

}
