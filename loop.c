// print the number 1 to n

#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter the value of N :- ");
    scanf("%d", &a);
    
    for(int i = 1; i <= a; i++){
        printf("%d\n", i);
    }
    
    getch();
    return 0;
}