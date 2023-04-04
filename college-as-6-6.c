#include<stdio.h>
//Write a program to print first digit. e.g. input 23617 output 2. Input 714 output 7.
int main()
{
    int n;
    printf("Enter number");
    scanf("%d",&n); // 23617
    while(n>10)
    {
        n/=10; //2361......
    }
    printf("%d",n);
    return 0;
}
