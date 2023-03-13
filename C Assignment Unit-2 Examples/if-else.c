// Program Name:- Check eligilibity for Driving 
// programmar name :- Kundan prajapati
// Date:- 12 March 2023

#include<stdio.h>
#include<conio.h>

void main()
{
    int age;
    printf("Enter Your Age:- ");
    scanf("%d", &age);

    if ( age < 18)
    {
        printf("You are not eligible for Driving.");
    }
    else{
        printf("Congratulations !! you are eligible for Driving. ");
    }
    getch();
}