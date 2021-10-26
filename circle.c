#inlcude<graphics.h>
#include<conio.h>

int main() {
	int gm = DETECT,gd;
	initgraph(&gm,&gd,''C:\\TC\\BGI'');
	circle(200,300,50);
	getch();
	closegraph();
	return 0;

}
