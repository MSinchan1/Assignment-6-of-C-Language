#include<stdio.h>
// Write a program to print positional values of digits of a number.
// Input 21463 output 3, 60, 400, 1000 and 20000. Input 451 outputs 1, 50 and 400.
int main()
{
    int n,a,x=10;
    printf("Enter number");
    scanf("%d",&n); //451
    while(n>0)
    {
        a=n%x; //1  50   400
        n=(n/x)*x; //450  400
        x=x*10; //100  1000
        printf("%d ,",a); //1,50,400
    }
    return 0;
}