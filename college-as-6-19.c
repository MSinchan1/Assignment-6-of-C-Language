#include<stdio.h>
//Write a program to print the last digit of an integer number, which is multiple of 3. e.g. input 23617 output 6.
int main()
{
    int n,a;
    printf("Enter number");
    scanf("%d",&n); //23617
    while((n%10)%3!=0)
    {
       
        n=n/10; //2361......
        a=n%10; // 7......
    }
    printf("%d",a);
    return 0;
}