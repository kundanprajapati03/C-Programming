#include <stdio.h>
#include <conio.h>

void main()
{
    int count;
    for (int i = 1; i < 100; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count = 1;
            }
        }
        if (count == 0)
        {
            printf("%d\t", i);
        }
        count = 0;
    }
    getch();
}



