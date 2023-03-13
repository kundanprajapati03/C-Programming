// Program Name:-Print Counting using While Loop
// programmar name :- Kundan prajapati
// Date:- 12 March 2023

#include<stdio.h>
#include<conio.h>

void main()
{
    int i=1;
    int counting;
    printf("Enter you want counting until when:-");
    scanf("%d", &counting);
    while (i <= counting){
        printf("%d\n", i);
        i++;
    }
    getch();
}