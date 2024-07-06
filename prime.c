#include <stdio.h>
#include <conio.h>
int main()
{
    int a, count = 0;
    printf("Enter a number:- ");
    scanf("%d", &a);

    for (int i = 2; i < a; i++)
    {
        if (a%i == 0)
        {
            count = 1;
        }
    }
    if (count == 0)
        {
            printf("Prime Number");
        }
        else{
            printf("Not a Prime Number");
        }
    
    getch();
    return 0;
}