#include <stdio.h>
#include <conio.h>
int main()
{
    int num, temp = 0;
    printf("Enter a number you want to Reverce:- ");
    scanf("%d", &num);

    while (num != 0)
    {
        temp = temp*10 + num % 10;
        num = num/10;
    }
    printf("The Reversed Number is %d.", temp);
    
    getch();
    return 0;
}