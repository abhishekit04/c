/* 			realloc() function  
 if the dynamically allocated memory is in sufficient or more than required we can change its size using the
 realloc() function . Its  syntax is 
 ptr=realloc(ptr,size); 
 
  
 */







// Program to reallocate the previously
// allocated memory

#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptr, i, n;

  // allocation memory
  ptr = (int *)malloc(2 * sizeof(int));

  printf("Previous memory: ");
  for (i = 0; i < 2; ++i)
    printf("%p, ", ptr + i);

  // reallocating memory
  ptr = realloc(ptr, 1 * sizeof(int));

  printf("\nCurrent memory: ");
  for (i = 0; i < 1; ++i)
    printf("%p, ", ptr + i);

  // freeing memory
  free(ptr);

  return 0;
}
