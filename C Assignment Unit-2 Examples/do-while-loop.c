// Program Name:-Print A to Z using Do-while loop
// programmar name :- Kundan prajapati
// Date:- 12 March 2023

#include<stdio.h>
#include<conio.h>

void main()
{
    char a = 'A';
    do
    {
        printf("%c\n",a);
        a++;
    } 
    while (a <= 'Z');
    getch();
}