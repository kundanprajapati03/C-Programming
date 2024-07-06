#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("Enter Number You want Counting till:-");
    scanf("%d", &a);

    printf("The counting is 1 to %d.\n", a);
    

    for( int i=1; i<=a; i++){
        printf("%d\n", i);
    }
    getch();
}