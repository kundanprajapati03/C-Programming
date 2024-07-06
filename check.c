//check the given number is positive, Negative or equal to 0.

#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter the value:- ");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("Positive(+)");
    }
    else if (a < 0)
    {
        printf("Negative(-)");
    }
    else{
        printf("Zero(0)");
    }
    getch();
    return 0;
}