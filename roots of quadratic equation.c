#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
	int a,b,c;
	int firstroot, secondroot;
    printf("enter the value of a , b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("a=%d b=%d c=%d\n",a,b,c);
    
    int d;
    d=b*b-4*a*c;
    printf("Discriminant (D) = %d\n",d);
    
            
    if (d>0) {
		firstroot = (-b + sqrt(d)) / (2 * a);
		secondroot = (-b - sqrt(d)) / (2 * a);
		printf("first root = %d\nsecond root = %d\n",firstroot,secondroot);
    }
    else if (d==0) {
		firstroot = secondroot = -b / 2 * a;
		printf("first root = %d\nsecond root = %d\n",firstroot,secondroot);
	}
	else {
        printf("No real roots"); 
	}
	getch();
	return 0;
	
}
