#include<stdio.h>
//Write a program, which will find sum of product of consecutive digits of a number. 
//e.g. when the input is 23145 the output is 2x3 + 3x1 + 1x4 + 4x5 = 33. Input 754 output 55. 
int main()
{
    int n,a,b,sum=0;
    printf("Enter number");
    scanf("%d",&n); //754
    while(n>0)
    {
        a=n%10; //4
        n/=10; //75
        b=n%10; // 5
        sum+=(a*b); //20+35
    }
    printf("%d",sum); //55
    return 0;
}