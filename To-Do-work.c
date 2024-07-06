// Program Name:- Mathematical calculation program.
// programmar name :- Kundan
// programmer Email:- kundan_229142@saitm.org
// Date:- 18 March 2023

#include <stdio.h>
#include <conio.h>

void todo();
void option();
void addition();
void subtraction();
void multiplication();
void division();

void main()
{
    todo();

    getch();
}
void todo(){
    printf("What do you what to do. \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. division\n");

    int number;
    printf("Enter Number You want to do:--");
    scanf("%d", &number);
    printf("\n");

    if (number == 1)
    {
        addition();
    }
    else if (number == 2)
    {
        subtraction();
    }
    else if (number == 3)
    {
        multiplication();
    }
    else if (number == 4)
    {
        division();
    }
    else{
        printf("you choose wrong Number !!");
    }
}

void option(){
    int op1;
    printf("1. Go to main Menu\n");
    printf("2. For exit the program\n");
    printf("Enter Number You want:--");
    scanf("%d", &op1);
    printf("\n");

    if (op1 == 1)
    {
        todo();
    }
    else{
        exit(0);
    }
}

// This function is used for add two numbers
void addition()
{
    printf("The Addition function start Here:----\n");
    int a, b;
    printf("Enter the value of A:- ");
    scanf("%d", &a);

    printf("Enter the value of B:- ");
    scanf("%d", &b);

    printf("The Addition of A and B:- %d\n\n", a + b);

    option();
}

// This function used for subtract two numbers
void subtraction()
{
    printf("The Subtract function start Here:----\n");
    int a, b;
    printf("Enter the value of A:- ");
    scanf("%d", &a);

    printf("Enter the value of B:- ");
    scanf("%d", &b);

    printf("The Subraction of A and B:- %d\n\n", a - b);

    option();
}

// This function used for Multiply two numbers
void multiplication()
{
    printf("The Multiplication function start Here:----\n");
    int a, b;
    printf("Enter the value of A:- ");
    scanf("%d", &a);

    printf("Enter the value of B:- ");
    scanf("%d", &b);

    printf("The Multiplication of A and B:- %d\n\n", a * b);

    option();
}

// This function used for divide two numbers
void division()
{
    printf("The division function start Here:----\n");
    float a, b;
    printf("Enter the value of A:- ");
    scanf("%f", &a);

    printf("Enter the value of B:- ");
    scanf("%f", &b);

    printf("The Division of A and B:- %f\n\n", a / b);

    option();
}