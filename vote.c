#include <stdio.h>
void main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("You have enter %d as your age.\n", age);

    if (age >= 18  && age <= 100)
    {
        printf("You are Eligiable for the VOTE.\n");

        if (age >= 18, age <= 40)
        {
            printf("your age is under 18 to 40.");
        }
        else if (age >= 41, age <= 60)
        {
            printf("your age is under 41 to 60.");
        }
        else if (age >= 61, age <= 80)
        {
            printf("your age is under 61 to 80.");
        }
        else if (age >= 81, age <= 100)
        {
            printf("your age is under 81 to 100.");
        }
        
    }
    else
    {
        printf("you are not eligiable for VOTE.");
    }
    getch();
}
