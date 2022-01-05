/*pointers are powerful that allows us to directly work with addresses . However we should never use the memory 
 location that is not allowed us to use. excessing memory that does not belong to us can lead to errors.
 		*/
 
#include<stdio.h>

int main() {
	int *ptr;
	*ptr=1;
	printf("%d",*ptr);
	
	
	return 0;
}
