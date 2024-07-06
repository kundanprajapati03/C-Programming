//check the given value is Even or Odd

#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter the value:-");
    scanf("%d", &a);
    if((a%2) == 0){
        printf("Given value is a Even Number");
    }
    else
    {
        printf("Given value is a Odd Number");
    }
    getch();
    return 0;
}