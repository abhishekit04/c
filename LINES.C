#include<graphics.h>
#include<conio.h>
#include<stdio.h>

int main() {
	int i;
	int gm = DETECT,gd;



	initgraph(&gm,&gd,"C:\\TC\\BGI");
	/*for(i=25;i<=125;i=i+20){
		line(100,i,300,i);
	}*/
	outtextxy(400,20,"CHESS");
	for(i=25;i<=225;i=i+25){
		line(i,25,i,225);
		line(25,i,225,i);
	}


	line(400,400,300,400);
	line(400,400,200,300);
	line(200,300,300,400);

	line(300,100,300,300);
	line(300,100,400,300);
	line(400,300,300,300);


	line(500,100,500,200);
	line(500,100,400,200);
	line(400,200,500,200);


	getch();
	closegraph();
	return 0;

}
