#include <stdio.h>

void main(){
    char name[2];
    printf("Enter your name:- ");
    scanf("%s", &name);

    printf("Good morning %s", name);
    getch();
}