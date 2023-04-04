#include<stdio.h>
//Write a program to print digits, which are multiple of 3 of a number. e.g. input 23617 output 6,3.
int main()
{
    int n,a;
    printf("Enter number");
    scanf("%d",&n); //23617
    while(n>0)
    {
        a=n%10; //7
        if(a%3==0)
        {
            printf("%d ",a); //6....3
        }
        n/=10; //2361 .....236.....
    }
    return 0;
}