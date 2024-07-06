// fine the average of 3 numbers
#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of A, B, C :- ");
    scanf("%d %d %d", &a, &b, &c);
    int avg = (a+b+c)/3;
    printf("The Average of 3 number :- %d", avg);
    getch();
    return 0;
}