//print the Even number till n

#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter the value of N :- ");
    scanf("%d", &a);
    
    for(int i = 2; i <= a; i+=2){
        printf("%d\n", i);
    }

    getch();
    return 0;
}