#include<stdio.h>
#include<conio.h>

int main () {
    char character;

    printf("Enter the character\n");
    scanf("%c",&character);

    (character  >= 97 && character  <= 122) ? printf("LOWERCASE"): printf("NOT LOWERCASE");

    getch ();
    return 0;
}