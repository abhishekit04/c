#include <stdio.h>
#include <stdlib.h>

int main()
{
    double *ptr;
    int n = 100;

    // allocate memory for n number of data of double type

    ptr = (double *)malloc(n * sizeof(double));

    printf("%p", ptr);

}





/*the return type of the addTen() function is an 
int pointer. The function adds 10 to each 
element of the array and returns a new pointer.

The return value is assigned to the result
pointer in the main() function.


    DYNAMIC MEMORY ALLOCATION

creating an array of fixed size can lead to two issues :  eg., int marks[10];
1.  if we only need to store the marks of only 3 students, there is a waste of memory.
2.  if we need to store the marks of more than 10 students, we can't.

To solve this is
we can allocate memory after we run our program (during run time). This is known as DYNAMIC MEMORY ALLOCATION.

for DYNAMIC memory allocation we can use these three library functions:
1.  malloc()
2.  realloc()
3.  free()

these functions are defined in the stdlib.h header file.

the name "malloc" stands for memory allocation.*/
