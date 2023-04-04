#include<stdio.h>
//Write a program to print the first even digit of a number form first. e.g. input 71236 output 2.
int main()
{
    int n,r,a;
    printf("Enter number : ");
    scanf("%d",&n); //71236
    while(n>0)
    {
        a=n%10; //6.....3...2....1....7...
        if(a%2==0)
        {
            r=a; // 6.....2
        }
        n/=10; //7123....712....71....7
    }
    printf("First even digit is: %d",r); //2
    return 0;
}
