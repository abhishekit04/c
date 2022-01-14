#include<stdio.h>
#include<string.h>

int main() {
	        
	char arr[] = "Praansho";
	int len1,len2; 
	len1=strlen(arr); // 8
	len2 = strlen("avi"); // 3
	printf("string=%s length=%d\n",arr,len1);
	printf("string=%s length=%d\n","abhi shek",len2);
	printf("size of array = %d bytes",sizeof(len1));
	
	return 0;
}
