#include<stdio.h>
//notice the use of [] here 
void printAge(int age[]) {
	//print elements of the array
	printf("%d\n",age[0]); //2
	printf("%d\n",age[2]); //4
	printf("%d\n",age[3]); //12
	printf("%d\n",age[1]); //8 
}

int main () {
	int ageArray[] = {2,8,4,12};
	
	//notice we do not use []
	//during the function call
	
	printAge(ageArray);
	return 0;
}
