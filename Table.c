#include <stdio.h>
#include <conio.h>
void main()
{
    int table;
    printf("Enter the Number You want Multiplication Table of : ");
    scanf("%d", & table);

    printf("Multiplication Table of %d :-", table);
    for (int i = 1; i <= 10; i++)
    {
        printf("\n%d X %d = %d", table, i, table*i);
    }
    getch();
}