#include<stdio.h>
//Write a program to print the last even digit of a number. e.g. input 23613 output 6.                      
//[Hint: while (x%2 0) x=x/10]
int main()
{
    int n,a;
    printf("Enter number");
    scanf("%d",&n); //23613
    while(n%2!=0) 
    {
        n/=10; // 2361...
        a=n%10; //3....
    }
    printf("%d",a); //6
    return 0;
}