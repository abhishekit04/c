#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char command[50];

    strcpy(command, "cls");
    // printf("%s",command);
    system(command);

    return 0;
}