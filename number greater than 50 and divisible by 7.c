#include <stdio.h>
int main() {
  int number=29;
  while(1) {
  	if(number%6==0) {
  		break;
	}
	number--;	  
  }
  printf("%d",number);
  return 0;
}
