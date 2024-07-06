// Check the valid trangle

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of A, B, C :- ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b) > c)
    {
        if ((b + c) > a)
        {
            if ((a + c) > b)
            {
                printf("It is a Valid Triangle");
            }
            else
            {
                printf("not a valid traingle");
            }
        }
        else
        {
            printf("not a valid traingle");
        }
    }
    else
    {
        printf("not a valid traingle");
    }
    getch();
    return 0;
}