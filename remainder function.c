#include<stdio.h>
// a = bq + r, i.e., a is dividend b is divisor q is quotient r is remainder 
//a = 10 b = 3 q = 3 r = 1
//10 =3*3+1
int remain(int a,int b);
int main () {
	int dividend = 10, divisor = 4 , quotient , rem;
//	rem = dividend + (divisor/quotient);
//	printf("sum of %d and %d div of %d = %d",dividend , divisor , quotient , rem);
	rem = remain(dividend,divisor);
	printf("remainder = %d",rem);
}

int remain(int a,int b) {
	return (b%a);
}
