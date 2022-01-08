/*				Type of pointer 

		there are two types of pointers 
		1) typed pointers :this type of pointers point to  any specific type of data
		for example int*  -> integer type 
					float* -> float type 
					struct* -> structure type
					
		2) untyped pointer : this type of pointers can hold data of any type 
		for example void*  -> any type
		this type of pointer is also called generic pointer  	*/
		
#include<stdio.h>

int main () {
	int i=100;
	int *ptr;
	ptr = &i; // ampersand
	printf("%d\n",i);
	printf("%u\n",ptr);
	printf("%u\n",&i);
	printf("%u\n",&ptr);
	printf("%d\n",*ptr);
	printf("%d\n",*(&i));
}
