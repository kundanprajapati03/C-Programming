// Program Name:- Check your grade accourding your Marks.
// programmar name :- Kundan prajapati
// Date:- 12 March 2023

#include<stdio.h>
#include<conio.h>

void main()
{
    int marks;
    printf("Enter Your Marks:- ");
    scanf("%d", &marks);
    printf("\nYou Enter %d as your marks.\n", marks);

    if( marks >= 33){
        printf("Congratulations !!\nYou are Pass.\n");

        if (marks > 80 && marks < 100)
        {
            printf("Your earned A+ Grade.");
        }
        if (marks > 60 && marks < 80)
        {
            printf("Your earned B+ Grade.");
        }
        if (marks > 40 && marks < 60)
        {
            printf("Your earned C+ Grade.");
        }
        if (marks >= 33 && marks < 40)
        {
            printf("Your earned D+ Grade.");
        }
        
    }
    else{
        printf("You are Fail !!\nBetter Luck Next Time !!");
    }
    getch();
}