//fine the simple intrest by given value

#include<stdio.h>
#include<conio.h>

int main(){
    int p,r,t,si;
    printf("Enter the value of P,R,T:-");
    scanf("%d %d %d", &p, &r, &t);
    si = (p*r*t)/100;
    printf("The simple intrest is %d.", si);
    return 0;
}