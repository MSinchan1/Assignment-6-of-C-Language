#include<stdio.h>
//Write a Program to print the digit immediately before the last even digit. input 23613 output 3 
int main()
{
    int n;
    printf("Enter number");
    scanf("%d",&n); //23613
    while(n%2!=0) 
    {
        n/=10; // 2361...236
    }
    printf("%d",(n/10)%10); //(23/10)%10=3
    return 0;
}