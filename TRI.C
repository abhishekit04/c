#include<graphics.h>
#include<conio.h>


int main() {
		
	int gm = DETECT,gd;
	initgraph(&gm,&gd,"C:\\TC\\BGI");
	

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
