#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Patton print using nested loop.\n");
    for (int a = 1; a <= 5; a++)
    {
        for (int i = 1; i <= a; i++)
        {
            printf("%d + %d = %d\t", a,i,a+i);
        }
        printf("\n");
    }
    getch();
    return 0;
}