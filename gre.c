//Check the given value is grater of lash

#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b;
    printf("Enter The value of A and B:-");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("A is grater");
    }
    else
    {
        printf("B is grater");
    }
    getch();
    return 0;
}