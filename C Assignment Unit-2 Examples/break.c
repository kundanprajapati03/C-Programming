// Program Name:- Stop counting using the break statement.
// programmar name :- Kundan prajapati
// Date:- 12 March 2023

#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    int stop;

    printf("1 to 100 Enter You when Stop:- ");
    scanf("%d", &stop);

    for (num = 1; num <= 100; num++)
    {
        if (num == stop)
        {
            break;
        }
        printf("%d\n", num);
    }
    getch();
}