#include<stdio.h>
//Write a program to print the digit immediately after the last even digit of a number. input 23613 output 1 
int main()
{
    int n,a;
    printf("Enter number");
    scanf("%d",&n); //23613
    while(n%2!=0) 
    {
        a=n%10; //3...1
        n/=10; // 2361...
    }
    printf("%d",a); //1
    return 0;
}