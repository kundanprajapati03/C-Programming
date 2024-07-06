// Program Name:- Skip counting using the continue statement.
// programmar name :- Kundan prajapati
// Date:- 12 March 2023

#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    int skip;

    printf("Enter You want to skip in 1 to 100:- ");
    scanf("%d", &skip);

    for (num = 1; num <= 100; num++)
    {
        if (num == skip)
        {
            continue;
        }
        printf("%d\n", num);
    }
    getch();
}